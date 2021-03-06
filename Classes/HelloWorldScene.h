#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "CCParallaxNodeExtras.h"

USING_NS_CC;
typedef enum {
    KENDREASONWIN,
    KENDREASONLOSE
} EndReason;

class HelloWorld : public cocos2d::CCLayer
{

private:
	CCSpriteBatchNode * _batchNode;
	CCSprite * _ship;
    CCParallaxNodeExtras *_backgroundNode;
    CCSprite *_spacedust1;
    CCSprite *_spacedust2;
    CCSprite *_planetsunrise;
    CCSprite *_galaxy;
    CCSprite *_spacialanomaly;
    CCSprite *_spacialanomaly2;
    
    // asteroids
    CCArray* _asteroids;
    int _nextAsteroid;
    float _nextAsteroidSpawn;
    
    // movement of the ship variable
    float _shipPointsPerSecY;
    
    // scheduled Update
    void update(float dt);
    
    CCArray* _shipLasers;
    int _nextShipLaser;
    
    int _lives;
    double _gameOverTime;
    bool _gameOver;
    
    void endScene(EndReason endReason);
    void restartTapped();

public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
    virtual void didAccelerate(CCAcceleration* pAccelerationValue);
    
    float randomValueBetween(float low, float high);
    
    void setInvisible(CCNode * node);
    
    float getTimeTick();
    
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);
    
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);
    
    virtual void ccTouchesBegan(cocos2d::CCSet* touches, cocos2d::CCEvent* event);
};

#endif // __HELLOWORLD_SCENE_H__
