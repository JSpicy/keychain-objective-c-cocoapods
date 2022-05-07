//
//  SecurityLevel.h
//  Keychain
//
//  Created by Robert Ellis on 2022/01/01.
//

#ifndef SecurityLevel_h
#define SecurityLevel_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, SecurityLevel) {
    ultra = 5,
    high = 4,
    medium = 3,
    low = 2,
    lightweight = 1
};

#endif /* SecurityLevel_h */
