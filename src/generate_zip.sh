#!/usr/bin/env bash

project_name='prog3_PC3_teo3_v2023_1'
source_code='
  can_text_split.h
  binary_search_tree.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}