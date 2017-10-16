include_directories(
        AntTweakBar-1.16/include/
        glfw-3.1.2/include/GLFW/
        glew-1.13.0/include/GL
        glm-0.9.7.1/
        glew-1.13.0/include/
        assimp-3.0.1270/include/
        bullet-2.81-rev2613/src/
        .
)

set (HEAD
    LoginWidget.h
)

set (SOURCE
    LoginWidget.cpp
    main.cpp
)

use_cxx11()

find_package(glfw3 3.1 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

include_directories(${GLEW_INCLUDE_DIRS})
add_executable(3DViewer ${SOURCE})

target_link_libraries(3DViewer glfw)
target_link_libraries(3DViewer ${OPENGL_gl_LIBRARY})
target_link_libraries(3DViewer ${GLEW_LIBRARY})
target_link_libraries(3DViewer ${OPENGL_glu_LIBRARY})

target_include_directories(3DViewer PUBLIC ${OPENGL_INCLUDE_DIR} ${GLEW_INCLUDE_DIR})

target_compile_features(3DViewer
    PUBLIC
        cxx_variadic_templates
        cxx_nullptr
    PRIVATE
        cxx_lambdas
)

