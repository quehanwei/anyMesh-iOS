//
//  SocketInfo.h
//  anyMesh
//
//  Created by David Paul on 6/29/14.
//  Copyright (c) 2014 dpTools. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MeshDeviceInfo;

@interface SocketInfo : NSObject

@property MeshDeviceInfo *dInfo;
@property BOOL isServer;

@end
