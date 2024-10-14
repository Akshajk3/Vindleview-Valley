#pragma once

#include <iostream>
#include <map>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "TextureManager.h"

class AssetManager
{
public:
    AssetManager(SDL_Renderer* renderer);
    ~AssetManager();
    
    SDL_Texture* getTexture(const std::string& assetPath);
    void clear();
    
    std::map<std::string, std::vector<SDL_Texture*>> assets;
    
private:
    SDL_Renderer* renderer;
    std::map<std::string, std::string> assetPaths;
    TextureManager textureManager;
};
