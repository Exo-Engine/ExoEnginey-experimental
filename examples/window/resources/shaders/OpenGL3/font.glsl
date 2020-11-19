#version 330 core
layout (location = 0) in vec4 vertex;

uniform mat4 projection;

out vec2 TexCoords;

void main()
{
    gl_Position = projection * vec4(vertex.xy, 0.0, 1.0);
    TexCoords = vertex.zw;
}

#FRAGMENT
#version 330 core

in vec2 TexCoords;
out vec4 color;

uniform sampler2D fontAtlas;
uniform vec3 textColor;

void main()
{    
    color = vec4(textColor, texture(fontAtlas, TexCoords).r);
}