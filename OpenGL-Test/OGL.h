#pragma once

#include "Shader.h"
#include "stb_image.h"

class OGL
{
public:
	OGL();
	~OGL();

	void Initialise();
	//void Buffers(float vertices[], unsigned int indices[], unsigned int & VAO, unsigned int & VBO, unsigned int & EBO);
	//void Buffers(float vertices[], unsigned int indices[]);
	void LoadTextures(unsigned char *data);

	void processInput(GLFWwindow *window);

	//void Render(unsigned int &VAO, Shader &ourShader, unsigned int &texture);
	void Update(float vertices[], unsigned int indices[], unsigned int &texture, unsigned char *data, Shader ourShader);
	

	int scrWidth;
	int scrHeight;

	GLFWwindow* window = nullptr;
	Shader ourShader;

	unsigned int VBO, VAO, EBO;

	unsigned int texture;
	int width, height, nrChannels;

	unsigned char *data = nullptr;
};

