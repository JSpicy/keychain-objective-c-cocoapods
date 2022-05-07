//
//  WrapperErrorCodes.h
//  KeychainCore
//
//  Created by Robert Ellis on 2022/01/20.
//

#ifndef WrapperErrorCodes_h
#define WrapperErrorCodes_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, WrapperErrorCode) {
    KCUnexpectedRuntimeError = 7000,
    KCInvalidParameterError = 7001,
    KCMemoryAllocationError = 7002,
};

#endif /* WrapperErrorCodes_h */
