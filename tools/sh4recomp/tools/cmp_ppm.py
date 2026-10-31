#!/usr/bin/env python3
"""cmp_ppm.py A B [diff.png]: compare two same-size images (PPM/PNG); prints mean abs diff and the fraction of pixels within 8/255 per channel."""
import sys, numpy as np
from PIL import Image
a = np.asarray(Image.open(sys.argv[1]).convert('RGB')).astype(int); b = np.asarray(Image.open(sys.argv[2]).convert('RGB')).astype(int)
d = np.abs(a - b)
print('mean abs diff %.3f/255, within 8: %.2f%%, within 24: %.2f%%' % (d.mean(), 100 * (d.max(-1) <= 8).mean(), 100 * (d.max(-1) <= 24).mean()))
if len(sys.argv) > 3: Image.fromarray(np.clip(d * 4, 0, 255).astype(np.uint8)).save(sys.argv[3])
