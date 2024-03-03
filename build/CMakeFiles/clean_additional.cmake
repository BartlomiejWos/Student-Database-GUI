# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\JPO_project_database_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\JPO_project_database_autogen.dir\\ParseCache.txt"
  "JPO_project_database_autogen"
  )
endif()
