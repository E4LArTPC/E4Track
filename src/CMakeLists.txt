# Specify the source files for the library
set(SOURCES
  PhysdEdx.C
  Hypfit.C
)

set(HDRFILES
  PhysdEdx.h
  Hypfit.h
)

# Create the shared library
add_library(E4Track SHARED ${SOURCES})

# Specify output directory for the shared library
set_target_properties(E4Track PROPERTIES
  PUBLIC_HEADER "${HDRFILES}"
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib
)

target_link_libraries(E4Track
PUBLIC
  ${ROOT_LIBRARIES}
  ROOT::MathMore
)

install(TARGETS E4Track
    EXPORT ProjE4Track-targets
    PUBLIC_HEADER DESTINATION include/ COMPONENT Development)
