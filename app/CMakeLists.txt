add_executable(run_test run_test.C)

target_link_libraries(run_test
 PRIVATE
  E4Track 
  ${ROOT_LIBRARIES}
)
target_include_directories(
  run_test PRIVATE 
  ${CMAKE_SOURCE_DIR}
)

install(TARGETS run_test )
