#pragma once

#include <glad/glad.h>

#include <string>

class Shader
{
public:
	unsigned int ID;

	Shader(const GLchar* vertexPath, const GLchar* fragPath);
	
	void use();
};