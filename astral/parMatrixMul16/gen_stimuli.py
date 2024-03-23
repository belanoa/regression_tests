#!/usr/bin/env python

import sys
import random


def write_arr(f, name, arr):
    f.write('const short %s[] = {\n' % name)
    for v in arr:
        f.write('%d,\n' % (v))
    f.write('};\n\n')
    return

################################################################################
f = open('parMatrixMul16_stimuli.h', 'w')


SIZE = 24 
RANGE = int(2**7/SIZE)

m_a   = []
m_b   = []
m_exp = []

for i in range(0,SIZE):
    for j in range(0,SIZE):
        a = random.randint(-RANGE, RANGE-1)
        b = random.randint(-RANGE, RANGE-1)

        m_a.append(a)
        m_b.append(b)

for i in range(0,SIZE):
    for j in range(0,SIZE):
        r = 0

        for k in range (0,SIZE):
            r = r + m_a[i * SIZE + k] * m_b[k * SIZE + j]

        m_exp.append(r)


write_arr(f, 'm_a',   m_a)
write_arr(f, 'm_b',   m_b)
write_arr(f, 'm_exp', m_exp)

f.write('#define SIZE %d\n' % SIZE)


f.write('__attribute__ ((section(".heapsram"))) short g_mA[SIZE][SIZE];\n')
f.write('__attribute__ ((section(".heapsram"))) short g_mB[SIZE][SIZE];\n')
f.write('__attribute__ ((section(".heapsram"))) short g_mC[SIZE][SIZE];\n')
f.write('__attribute__ ((section(".heapsram"))) short g_mB_tmp[SIZE][SIZE];\n')

