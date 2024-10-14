#include "AssetManager.h"


AssetManager::AssetManager(SDL_Renderer* renderer)
    : renderer(renderer)
{
    // Player Asset Paths
        assetPaths["idle_down"] = ("Assets/Characters/images/idle_down");
        assetPaths["walk_down"] = ("Assets/Characters/images/walk_down");
        assetPaths["hoe_down"] = ("Assets/Characters/images/hoe_down");
        assetPaths["axe_down"] = ("Assets/Characters/images/axe_down");
        assetPaths["water_down"] = ("Assets/Characters/images/water_down");
        assetPaths["idle_left"] = ("Assets/Characters/images/idle_left");
        assetPaths["walk_left"] = ("Assets/Characters/images/walk_left");
        assetPaths["hoe_left"] = ("Assets/Characters/images/hoe_left");
        assetPaths["axe_left"] = ("Assets/Characters/images/axe_left");
        assetPaths["water_left"] = ("Assets/Characters/images/water_left");
        assetPaths["idle_right"] = ("Assets/Characters/images/idle_right");
        assetPaths["walk_right"] = ("Assets/Characters/images/walk_right");
        assetPaths["hoe_right"] = ("Assets/Characters/images/hoe_right");
        assetPaths["axe_right"] = ("Assets/Characters/images/axe_right");
        assetPaths["water_right"] = ("Assets/Characters/images/water_right");
        assetPaths["idle_up"] = ("Assets/Characters/images/idle_up");
        assetPaths["walk_up"] = ("Assets/Characters/images/walk_up");
        assetPaths["hoe_up"] = ("Assets/Characters/images/hoe_up");
        assetPaths["axe_up"] = ("Assets/Characters/images/axe_up");
        assetPaths["water_up"] = ("Assets/Characters/images/water_up");

    // Entity Asset Paths
        assetPaths["cow_idle"] = ("Assets/Characters/images/cow/idle");
        assetPaths["chicken_idle"] = ("Assets/Characters/images/chicken/idle");
        
    // Tilemap Asset Paths
        assetPaths["grass"] = ("Assets/Tilesets/images/grass");
        assetPaths["fence"] = ("Assets/Tilesets/images/fence");
        assetPaths["till"] = ("Assets/Tilesets/images/till");

    // UI Asset Paths
        assetPaths["hoe"] = ("Assets/Objects/images/Basic tools and meterials_2.png");
        assetPaths["axe"] = ("Assets/Objects/images/Basic tools and meterials_1.png");
        assetPaths["water"] = ("Assets/Objects/images/Basic tools and meterials_0.png");
        assetPaths["wheatBag"] = ("Assets/Objects/images/wheat/00.png");
        assetPaths["beetBag"] = ("Assets/Objects/images/beet/00.png");
        
    // Plant Asests Paths
        assetPaths["wheat"] = ("Assets/Objects/images/wheat");
        assetPaths["beet"] = ("Assets/Objects/images/beet");

    // Tree Asset Paths
        assetPaths["tree1"] = ("Assets/Objects/images/trees1");
        assetPaths["tree2"] = ("Assets/Objects/images/trees2");

    // Item Asset Paths
        assetPaths["wood"] = ("Assets/Objects/images/wood");

    // Mouse Asset Paths
        assetPaths["cursor"] = ("Assets/Mouse_sprites");

    // Particle Asset Paths
        assetPaths["smoke"] = ("Assets/Particles/Smoke");

    // Building Asset Paths
        assetPaths["house"] = ("Assets/Objects/House.png");

    // Inventory Asset Paths
        assetPaths["inv"] = ("Assets/Inventory/tiles");

    // Chest Asset Paths
        assetPaths["chest"] = ("Assets/Objects/images/chest");
        
    // Player Assets
        assets["idle_down"] = textureManager.loadTextures(assetPaths["idle_down"], renderer);
        assets["walk_down"] = textureManager.loadTextures(assetPaths["walk_down"], renderer);
        assets["hoe_down"] = textureManager.loadTextures(assetPaths["hoe_down"], renderer);
        assets["axe_down"] = textureManager.loadTextures(assetPaths["axe_down"], renderer);
        assets["water_down"] = textureManager.loadTextures(assetPaths["water_down"], renderer);
        assets["idle_left"] = textureManager.loadTextures(assetPaths["idle_left"], renderer);
        assets["walk_left"] = textureManager.loadTextures(assetPaths["walk_left"], renderer);
        assets["hoe_left"] = textureManager.loadTextures(assetPaths["hoe_left"], renderer);
        assets["axe_left"] = textureManager.loadTextures(assetPaths["axe_left"], renderer);
        assets["water_left"] = textureManager.loadTextures(assetPaths["water_left"], renderer);
        assets["idle_right"] = textureManager.loadTextures(assetPaths["idle_right"], renderer);
        assets["walk_right"] = textureManager.loadTextures(assetPaths["walk_right"], renderer);
        assets["hoe_right"] = textureManager.loadTextures(assetPaths["hoe_right"], renderer);
        assets["axe_right"] = textureManager.loadTextures(assetPaths["axe_right"], renderer);
        assets["water_right"] = textureManager.loadTextures(assetPaths["water_right"], renderer);
        assets["idle_up"] = textureManager.loadTextures(assetPaths["idle_up"], renderer);
        assets["walk_up"] = textureManager.loadTextures(assetPaths["walk_up"], renderer);
        assets["hoe_up"] = textureManager.loadTextures(assetPaths["hoe_up"], renderer);
        assets["axe_up"] = textureManager.loadTextures(assetPaths["axe_up"], renderer);
        assets["water_up"] = textureManager.loadTextures(assetPaths["water_up"], renderer);

    // Entity Assets
        assets["cow_idle"] = textureManager.loadTextures(assetPaths["cow_idle"], renderer);
        assets["chicken_idle"] = textureManager.loadTextures(assetPaths["chicken_idle"], renderer);

    // Tilemap Assets
        assets["grass"] = textureManager.loadTextures(assetPaths["grass"], renderer);
        assets["fence"] = textureManager.loadTextures(assetPaths["fence"], renderer);
        assets["till"] = textureManager.loadTextures(assetPaths["till"], renderer);

    // Inventory Assets
        assets["inv"] = textureManager.loadTextures(assetPaths["inv"], renderer);
        
    // Building Assets
        SDL_Texture* houseTex = textureManager.loadTexture(assetPaths["house"].c_str(), renderer);

    // UI Assets
        SDL_Texture* cursorTexture = textureManager.loadTexture("Assets/Mouse_sprites/03.png", renderer);
        SDL_Texture* hoe_icon = textureManager.loadTexture(assetPaths["hoe"].c_str(), renderer);
        SDL_Texture* axe_icon = textureManager.loadTexture(assetPaths["axe"].c_str(), renderer);
        SDL_Texture* water_icon = textureManager.loadTexture(assetPaths["water"].c_str(), renderer);
        SDL_Texture* wheat_icon = textureManager.loadTexture(assetPaths["wheatBag"].c_str(), renderer);
        SDL_Texture* beet_icon = textureManager.loadTexture(assetPaths["beetBag"].c_str(), renderer);

    // Plant Assets
        assets["wheat"] = textureManager.loadTextures(assetPaths["wheat"], renderer);
        assets["beet"] = textureManager.loadTextures(assetPaths["beet"], renderer);

    // Tree Assets
        assets["tree1"] = textureManager.loadTextures(assetPaths["tree1"], renderer);
        assets["tree2"] = textureManager.loadTextures(assetPaths["tree2"], renderer);

    // Item Assets
        assets["wood"] = textureManager.loadTextures(assetPaths["wood"], renderer);

    // Mouse Assets
        assets["cursor"] = textureManager.loadTextures(assetPaths["cursor"], renderer);

    // Particle Assets
        assets["smoke"] = textureManager.loadTextures(assetPaths["smoke"], renderer);

    // Chest Assets
        assets["chest"] = textureManager.loadTextures(assetPaths["chest"], renderer);
}
