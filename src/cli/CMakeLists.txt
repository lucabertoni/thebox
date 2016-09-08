include_directories(${thebox_SOURCE_DIR}/cli)
include_directories(${thebox_SOURCE_DIR}/common)

file(GLOB_RECURSE SOURCE_FILES
  "${thebox_SOURCE_DIR}/cli/*.c"
  "${thebox_SOURCE_DIR}/common/*.c"
)

list(REMOVE_ITEM SOURCE_FILES ".#*")

add_executable(theboxcli ${SOURCE_FILES})
