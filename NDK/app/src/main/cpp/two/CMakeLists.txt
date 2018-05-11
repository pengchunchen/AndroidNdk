#生成so动态库
ADD_LIBRARY(two-lib SHARED two.cpp)

target_link_libraries(two-lib log)