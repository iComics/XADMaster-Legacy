//
//  XADMasterTests.m
//  XADMasterTests
//
//  Created by Tim Oliver on 8/05/2016.
//  Copyright © 2016 Tim Oliver. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "XADMaster.h"

@interface XADMasterTests : XCTestCase

@end

@implementation XADMasterTests

- (void)testZIPParser
{
    NSString *zipFilePath = [[NSBundle bundleForClass:[self class]] pathForResource:@"Test" ofType:@"zip"];
    XADArchive *archive = [XADArchive archiveForFile:zipFilePath];
    XCTAssertNotNil(archive);
    
    XCTAssert(archive.numberOfEntries == 3);
}

@end
