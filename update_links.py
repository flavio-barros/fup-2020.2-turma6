#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import os
folders = [item for item in sorted(os.listdir(".")) if os.path.isdir(item)  and not item.startswith(".")]
file = open("Readme.md", "w")
file.write("# FUP 2020.2\n\n")
for folder in folders:
    file.write("- [" + folder + "](" + folder + "/Readme.md)\n")
file.close()

