#pragma once
#include "Define.h"

class Texture
{
public:
	Texture(void);
	~Texture(void);

	LPDIRECT3DTEXTURE9 d3dTexture;
	D3DXIMAGE_INFO info;
};

