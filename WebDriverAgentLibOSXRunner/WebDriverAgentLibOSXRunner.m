//
//  WebDriverAgentLibOSXRunner.m
//  WebDriverAgentLibOSXRunner
//
//  Created by danil on 7/11/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#import <XCTest/XCTest.h>

#import <WebDriverAgentLibOSX/FBDebugLogDelegateDecorator.h>
#import <WebDriverAgentLibOSX/FBConfiguration.h>
#import <WebDriverAgentLibOSX/FBFailureProofTestCase.h>
#import <WebDriverAgentLibOSX/FBWebServer.h>
#import <WebDriverAgentLibOSX/XCTestCase.h>

@interface UITestingUITests : FBFailureProofTestCase
@end

@implementation UITestingUITests

+ (void)setUp
{
    [FBDebugLogDelegateDecorator decorateXCTestLogger];
    [super setUp];
}

/**
 Never ending test used to start WebDriverAgent
 */
- (void)testRunner
{
    [FBConfiguration shouldShowFakeCollectionViewCells:YES];
    [[FBWebServer new] startServing];
}

@end
