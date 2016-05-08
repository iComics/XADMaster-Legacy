//
//  XADMaster.h
//  XADMaster
//
//  Created by Tim Oliver on 8/05/2016.
//  Copyright © 2016 Tim Oliver. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for XADMaster.
FOUNDATION_EXPORT double XADMasterVersionNumber;

//! Project version string for XADMaster.
FOUNDATION_EXPORT const unsigned char XADMasterVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <XADMaster/PublicHeader.h>
#import "XADArchive.h"
#import "NSDateXAD.h"
#import "XAD7ZipAESHandle.h"
#import "XAD7ZipBCJ2Handle.h"

#import "XAD7ZipBranchHandles.h"
#import "XAD7ZipParser.h"
#import "XADAppleDouble.h"
#import "XADArchiveParserDescriptions.h"
#import "XADBlockHandle.h"
#import "XADCRCHandle.h"
#import "XADCompressHandle.h"
#import "XADDeflateHandle.h"
#import "XADDeltaHandle.h"
#import "XADFastLZSSHandle.h"
#import "XADLArcHandles.h"
#import "XADLZHDynamicHandle.h"
#import "XADLZHParser.h"
#import "XADLZHStaticHandle.h"
#import "XADLZMA2Handle.h"
#import "XADLZMAHandle.h"
#import "XADLZSSHandle.h"
#import "XADLibXADIOHandle.h"
#import "XADMacArchiveParser.h"