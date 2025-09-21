
include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/chapter1 chapter1)
add_executable(main 
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
    ${chapter1}
)
