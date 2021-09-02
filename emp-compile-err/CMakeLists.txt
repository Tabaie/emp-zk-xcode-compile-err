project(emp_zk_compile_err)

set(CMAKE_CXX_STANDARD 17)

add_executable(emp_zk_compile_err main.cpp)
target_include_directories(emp_zk_compile_err PUBLIC "/usr/local/include/emp-zk")
target_include_directories(emp_zk_compile_err PUBLIC "/usr/local/include/emp-tool")
target_include_directories(emp_zk_compile_err PUBLIC "/usr/local/include/emp-ot")
target_include_directories(emp_zk_compile_err PUBLIC "/usr/local/opt/openssl@1.1/include")