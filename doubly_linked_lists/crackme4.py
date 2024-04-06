# uncompyle6 version 3.9.1
# Python bytecode version base 3.4 (3310)
# Decompiled from: Python 3.10.12 (main, Nov 20 2023, 15:14:05) [GCC 11.4.0]
# Embedded file name: 100-crackme.py
# Compiled at: 2017-01-06 00:44:37
# Size of source mod 2**32: 195 bytes
pwd = input("Password: ")
ok = "Zen of Python"
ok = ok + " C"
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
if pwd == ok:
    print("OK")
else:
    print("KO")
