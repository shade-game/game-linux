#include <ExampleApplication.h>
#include <Ogre.h>
#include "OgreTest.h"

OgreTest::OgreTest()
{

}

void OgreTest::createScene()
{
    //SkyBox
    mSceneMgr->setSkyBox(true, "Examples/CloudyNoonSkyBox");

    //Entity
    Entity *EntityTux = mSceneMgr->createEntity("Tux", "penguin.mesh");
    Entity *EntityHouse = mSceneMgr->createEntity("House", "tudorhouse.mesh");
    Entity *GroundGrass = mSceneMgr->createEntity("Grass", "sol");

    //Noeuds
    SceneNode *NodeTux = mSceneMgr->getRootSceneNode()->createChildSceneNode("NodeTux");
    SceneNode *NodeHouse = mSceneMgr->getRootSceneNode()->createChildSceneNode("NodeHouse");

    //Position des noeuds
    NodeHouse->setPosition(-200, 500, -370);

    //Affiche des noeuds
    NodeTux->attachObject(EntityTux);
    NodeHouse->attachObject(EntityHouse);

    Light* myLight = mSceneMgr->createLight("Light");// Créer la lumière
    myLight->setType(Light::LT_POINT);
    myLight->setPosition(0, 40, 0);
    myLight->setDiffuseColour(1, 1, 1);
    myLight->setSpecularColour(1, 1, 1);
}
