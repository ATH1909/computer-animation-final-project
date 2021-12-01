#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>	

class Bone_Animation
{
public:
	Bone_Animation();
	~Bone_Animation();

	void init();
	void update(float delta_time);
	void reset();

public:

	// Here the head of each vector is the root bone
	std::vector<glm::vec3> scale_vector; //arms and legs are the same lengths for my convenience
	std::vector<std::vector<glm::vec3>> rotation_degree_vector;
	std::vector<std::vector<std::vector<glm::vec3>>> poses;
	std::vector<glm::vec4> colors; //arms and legs are also the same colors for my convenience

	glm::vec3 body_scaling;
	glm::vec3 body_position;
	glm::vec4 body_color;
	std::vector<glm::vec3> root_position;
	int progresstracker;
	int divisor;

};

