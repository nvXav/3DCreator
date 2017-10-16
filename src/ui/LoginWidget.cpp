
#include <GL/glew.h>

#include <GLFW/glfw3.h>
#include <GLFW/glfw3.h>

//#include <glm/glm.hpp>

#include "LoginWidget.h"


LoginWidget::LoginWidget()
{
    if (!glfwInit())
    {
        //fprintf("Fail to initialize GLFW\n");
    }
}

