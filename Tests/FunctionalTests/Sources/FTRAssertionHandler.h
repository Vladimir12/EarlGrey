//
// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

/**
 *  A NSAssertionHandler for FTR tests to capture NSAsserts. Note that NSAsserts are captured and
 *  saved but not raised again.
 */
@interface FTRAssertionHandler : NSAssertionHandler

/**
 *  A property that keeps track of total number of failing assertions.
 */
@property(nonatomic, assign) NSInteger failuresCount;

/**
 *  A property that keeps track of the descriptions of all failing assertions.
 */
@property(nonatomic, strong) NSMutableArray *failureDescriptions;

@end
