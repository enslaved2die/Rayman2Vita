# VitaSDK environment setup
PROJECT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export VITASDK="$PROJECT_DIR/.vitasdk"
export PATH="$VITASDK/bin:$PATH"

echo "VitaSDK configured:"
echo "  VITASDK=$VITASDK"
echo "  GCC=$(which arm-vita-eabi-gcc)"
