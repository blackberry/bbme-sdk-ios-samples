/* Copyright (c) 2017 BlackBerry.  All Rights Reserved.
* 
* Licensed under the Apache License, Version 2.0 (the "License"); 
* you may not use this file except in compliance with the License. 
* You may obtain a copy of the License at 
* 
* http://www.apache.org/licenses/LICENSE-2.0 
* 
* Unless required by applicable law or agreed to in writing, software 
* distributed under the License is distributed on an "AS IS" BASIS, 
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
* See the License for the specific language governing permissions and 
* limitations under the License. 
  
* This sample code was created by BlackBerry using SDKs from Apple Inc. 
* and may contain code licensed for use only with Apple products. 
* Please review your Apple SDK Agreement for additional details. 
*/ 

#ifndef ConfigSettings_h
#define ConfigSettings_h


/*
 SDK_SERVICE_DOMAIN must be changed to match the domain identifier provided by
 BlackBerry for your app.
 */
#define SDK_SERVICE_DOMAIN @"YOUR_USER_DOMAIN"

/*
 The value for GOOGLE_SIGNIN_CLIENTID must match the CLIENT_ID value found in
 GoogleService-Info.plist. This file was generated by following the
 "GET A CONFIGURATION FILE" link at:
 https://developers.google.com/identity/sign-in/ios/start-integrating
 To use Google Sign-In in another app, a new configuration file must be generated.
 */
#define GOOGLE_SIGNIN_CLIENTID @"YOUR_CLIENT_ID"

/*
 Change this value (either kBBMConfig_Sandbox or kBBMConfigProduction) to change the
 environment
 */
#define SDK_ENVIROMENT kBBMConfig_Sandbox

#endif /* ConfigSettings_h */

