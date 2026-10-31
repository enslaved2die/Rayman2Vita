cmake_minimum_required(VERSION 3.16)

# Locate VitaSDK toolchain
if(NOT DEFINED ENV{VITASDK})
  if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/.vitasdk")
    set(ENV{VITASDK} "${CMAKE_CURRENT_SOURCE_DIR}/.vitasdk")
  endif()
endif()

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  if(DEFINED ENV{VITASDK})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "VitaSDK toolchain file")
  elseif(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/.vitasdk/share/vita.toolchain.cmake")
    set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/.vitasdk/share/vita.toolchain.cmake" CACHE PATH "VitaSDK toolchain file")
  endif()
endif()

project(rayman2 C)

if(DEFINED ENV{VITASDK})
  set(VITASDK $ENV{VITASDK})
elseif(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/.vitasdk")
  set(VITASDK "${CMAKE_CURRENT_SOURCE_DIR}/.vitasdk")
endif()

include("${VITASDK}/share/vita.cmake" REQUIRED)

# Target name per Plan.md specifications
set(TARGET_NAME rayman2)

set(SOURCES
  src/main.c
  src/engine/cpa_engine.c
  src/engine/r2_level_geo.c
  src/platform/vita/gli_vitagl.c
  src/platform/vita/gli_pvr.c
  src/platform/vita/os_vita.c
  src/platform/vita/vfs_vita.c
  src/platform/vita/ino_vita.c
  src/platform/vita/r2_ai_tables.c
  src/platform/vita/snd_vita.c
  src/platform/vita/save_vita.c
)

add_executable(${TARGET_NAME} ${SOURCES})

# Toolchain Compiler & Preprocessor Flags
target_compile_options(${TARGET_NAME} PRIVATE
  -O2
  -mcpu=cortex-a9
  -mfpu=neon
  -mfloat-abi=hard
  -fno-strict-aliasing
  -Wall
  -Wextra
  -Wno-unused-parameter
)

target_compile_definitions(${TARGET_NAME} PRIVATE
  CPA_PLATFORM_VITA
  MTH_USE_FLOAT
  R2_DREAMCAST_BASELINE
)

target_include_directories(${TARGET_NAME} PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/include/vita_shim
  ${CMAKE_CURRENT_SOURCE_DIR}/src/engine
  ${CMAKE_CURRENT_SOURCE_DIR}/src/platform/vita
)

# Stub and system libraries required for VitaGL runtime
target_link_libraries(${TARGET_NAME} PRIVATE
  vitaGL
  vitashark
  SceShaccCgExt
  SceShaccCg_stub
  taihen_stub
  SceGxm_stub
  SceDisplay_stub
  SceCtrl_stub
  SceKernelDmacMgr_stub
  SceCommonDialog_stub
  SceAppMgr_stub
  SceLibKernel_stub
  SceKernelThreadMgr_stub
  SceIofilemgr_stub
  SceAudio_stub
  mathneon
  stdc++
  m
)

# Create Vita VELF and SELF (eboot.bin)
vita_create_self(eboot.bin ${TARGET_NAME})

# Create Vita VPK Package
vita_create_vpk(Rayman2.vpk RAYM00002 eboot.bin
  VERSION 01.00
  NAME "Rayman 2: The Great Escape"
  FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/icon0.png sce_sys/icon0.png
  FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/livearea/contents/bg.png sce_sys/livearea/contents/bg.png
  FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/livearea/contents/startup.png sce_sys/livearea/contents/startup.png
  FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/livearea/contents/template.xml sce_sys/livearea/contents/template.xml
)

if(TARGET Rayman2.vpk-vpk AND NOT TARGET Rayman2.vpk)
  add_custom_target(Rayman2.vpk DEPENDS Rayman2.vpk-vpk)
endif()
