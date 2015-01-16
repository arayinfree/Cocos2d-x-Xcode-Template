//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#ifndef _____PROJECTNAMEASIDENTIFIER________FILEBASENAMEASIDENTIFIER_____
#define _____PROJECTNAMEASIDENTIFIER________FILEBASENAMEASIDENTIFIER_____
#include "cocos2d.h"

class ___FILEBASENAME___ : public cocos2d::Scene
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(___FILEBASENAME___);
};
#endif /* defined(_____PROJECTNAMEASIDENTIFIER________FILEBASENAMEASIDENTIFIER_____) */
