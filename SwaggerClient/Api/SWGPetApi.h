#import <Foundation/Foundation.h>
#import "SWGApiResponse.h"
#import "SWGPet.h"
#import "SWGApi.h"

/**
* Swagger Petstore
* This is a sample Petstore server.  You can find  out more about Swagger at  [http://swagger.io](http://swagger.io) or on  [irc.freenode.net, #swagger](http://swagger.io/irc/). 
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGPetApi: NSObject <SWGApi>

extern NSString* kSWGPetApiErrorDomain;
extern NSInteger kSWGPetApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Add a new pet to the store
/// 
///
/// @param body Pet object that needs to be added to the store
/// 
///  code:405 message:"Invalid input"
///
/// @return void
-(NSURLSessionTask*) addPetWithBody: (SWGPet*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// Deletes a pet
/// 
///
/// @param petId Pet id to delete
/// @param apiKey  (optional)
/// 
///  code:400 message:"Invalid ID supplied",
///  code:404 message:"Pet not found"
///
/// @return void
-(NSURLSessionTask*) deletePetWithPetId: (NSNumber*) petId
    apiKey: (NSString*) apiKey
    completionHandler: (void (^)(NSError* error)) handler;


/// Finds Pets by status
/// Multiple status values can be provided with comma separated strings
///
/// @param status Status values that need to be considered for filter
/// 
///  code:200 message:"successful operation",
///  code:400 message:"Invalid status value"
///
/// @return NSArray<SWGPet>*
-(NSURLSessionTask*) findPetsByStatusWithStatus: (NSArray<NSString*>*) status
    completionHandler: (void (^)(NSArray<SWGPet>* output, NSError* error)) handler;


/// Finds Pets by tags
/// Muliple tags can be provided with comma separated strings. Use\\ \\ tag1, tag2, tag3 for testing.
///
/// @param tags Tags to filter by
/// 
///  code:200 message:"successful operation",
///  code:400 message:"Invalid tag value"
///
/// @return NSArray<SWGPet>*
-(NSURLSessionTask*) findPetsByTagsWithTags: (NSArray<NSString*>*) tags
    completionHandler: (void (^)(NSArray<SWGPet>* output, NSError* error)) handler;


/// Find pet by ID
/// Returns a single pet
///
/// @param petId ID of pet to return
/// 
///  code:200 message:"successful operation",
///  code:400 message:"Invalid ID supplied",
///  code:404 message:"Pet not found"
///
/// @return SWGPet*
-(NSURLSessionTask*) getPetByIdWithPetId: (NSNumber*) petId
    completionHandler: (void (^)(SWGPet* output, NSError* error)) handler;


/// Update an existing pet
/// 
///
/// @param body Pet object that needs to be added to the store
/// 
///  code:400 message:"Invalid ID supplied",
///  code:404 message:"Pet not found",
///  code:405 message:"Validation exception"
///
/// @return void
-(NSURLSessionTask*) updatePetWithBody: (SWGPet*) body
    completionHandler: (void (^)(NSError* error)) handler;


/// Updates a pet in the store with form data
/// 
///
/// @param petId ID of pet that needs to be updated
/// @param name Updated name of the pet (optional)
/// @param status Updated status of the pet (optional)
/// 
///  code:405 message:"Invalid input"
///
/// @return void
-(NSURLSessionTask*) updatePetWithFormWithPetId: (NSNumber*) petId
    name: (NSString*) name
    status: (NSString*) status
    completionHandler: (void (^)(NSError* error)) handler;


/// uploads an image
/// 
///
/// @param petId ID of pet to update
/// @param additionalMetadata Additional data to pass to server (optional)
/// @param file file to upload (optional)
/// 
///  code:200 message:"successful operation"
///
/// @return SWGApiResponse*
-(NSURLSessionTask*) uploadFileWithPetId: (NSNumber*) petId
    additionalMetadata: (NSString*) additionalMetadata
    file: (NSURL*) file
    completionHandler: (void (^)(SWGApiResponse* output, NSError* error)) handler;



@end
