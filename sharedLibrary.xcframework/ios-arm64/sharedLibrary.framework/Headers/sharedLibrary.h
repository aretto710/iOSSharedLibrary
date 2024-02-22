#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedLibraryKotlinEnumCompanion, SharedLibraryKotlinEnum<E>, SharedLibraryEnvironment, SharedLibraryKotlinArray<T>, NSObject, SharedLibraryLoginRequestCompanion, SharedLibraryLoginRequest, SharedLibraryParticipante, SharedLibraryPerfil, SharedLibraryLoginResponseCompanion, SharedLibraryLoginResponse, SharedLibraryLoginType, SharedLibrarySplashRequest, SharedLibraryNetworkUtils, SharedLibraryParticipanteCompanion, SharedLibraryPerfilCompanion, SharedLibrarySplashRequestVersion, SharedLibrarySplashRequestCompanion, SharedLibrarySplashRequestVersionCompanion, SharedLibrarySplashResponseVersion, SharedLibrarySplashResponseCompanion, SharedLibrarySplashResponse, SharedLibrarySplashResponseVersionCompanion, SharedLibraryUrlResponseCompanion, SharedLibraryUrlResponse, SharedLibraryKotlinThrowable, SharedLibraryKotlinException, SharedLibraryKotlinRuntimeException, SharedLibraryKotlinIllegalStateException, SharedLibraryKotlinx_serialization_coreSerializersModule, SharedLibraryKotlinx_serialization_coreSerialKind, SharedLibraryKotlinNothing;

@protocol SharedLibraryKotlinComparable, SharedLibraryPlatform, SharedLibraryKotlinx_serialization_coreKSerializer, SharedLibraryKotlinIterator, SharedLibraryKotlinx_serialization_coreEncoder, SharedLibraryKotlinx_serialization_coreSerialDescriptor, SharedLibraryKotlinx_serialization_coreSerializationStrategy, SharedLibraryKotlinx_serialization_coreDecoder, SharedLibraryKotlinx_serialization_coreDeserializationStrategy, SharedLibraryKotlinx_serialization_coreCompositeEncoder, SharedLibraryKotlinAnnotation, SharedLibraryKotlinx_serialization_coreCompositeDecoder, SharedLibraryKotlinx_serialization_coreSerializersModuleCollector, SharedLibraryKotlinKClass, SharedLibraryKotlinKDeclarationContainer, SharedLibraryKotlinKAnnotatedElement, SharedLibraryKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedLibraryBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedLibraryBase (SharedLibraryBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedLibraryMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedLibraryMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedLibraryKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedLibraryNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedLibraryByte : SharedLibraryNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedLibraryUByte : SharedLibraryNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedLibraryShort : SharedLibraryNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedLibraryUShort : SharedLibraryNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedLibraryInt : SharedLibraryNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedLibraryUInt : SharedLibraryNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLibraryLong : SharedLibraryNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedLibraryULong : SharedLibraryNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedLibraryFloat : SharedLibraryNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedLibraryDouble : SharedLibraryNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedLibraryBoolean : SharedLibraryNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedLibraryKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedLibraryKotlinEnum<E> : SharedLibraryBase <SharedLibraryKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibraryKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environment")))
@interface SharedLibraryEnvironment : SharedLibraryKotlinEnum<SharedLibraryEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibraryEnvironment *uat __attribute__((swift_name("uat")));
@property (class, readonly) SharedLibraryEnvironment *prod1 __attribute__((swift_name("prod1")));
@property (class, readonly) SharedLibraryEnvironment *prod2 __attribute__((swift_name("prod2")));
+ (SharedLibraryKotlinArray<SharedLibraryEnvironment *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedLibraryEnvironment *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedLibraryPlatform
@required
@property (readonly) NSString *idUUID __attribute__((swift_name("idUUID")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *versionId __attribute__((swift_name("versionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedLibraryIOSPlatform : SharedLibraryBase <SharedLibraryPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *idUUID __attribute__((swift_name("idUUID")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *versionId __attribute__((swift_name("versionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMPreference")))
@interface SharedLibraryKMMPreference : SharedLibraryBase
- (instancetype)initWithContext:(NSObject *)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (BOOL)getBoolKey:(NSString *)key default:(BOOL)default_ __attribute__((swift_name("getBool(key:default:)")));
- (int32_t)getIntKey:(NSString *)key default:(int32_t)default_ __attribute__((swift_name("getInt(key:default:)")));
- (NSString * _Nullable)getStringKey:(NSString *)key __attribute__((swift_name("getString(key:)")));
- (void)putKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("put(key:value:)")));
- (void)putKey:(NSString *)key value_:(int32_t)value __attribute__((swift_name("put(key:value_:)")));
- (void)putKey:(NSString *)key value__:(NSString *)value __attribute__((swift_name("put(key:value__:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest")))
@interface SharedLibraryLoginRequest : SharedLibraryBase
- (instancetype)initWithUsername:(NSString *)username estadoAutenticacion:(int64_t)estadoAutenticacion estadoAutenticacionNuevo:(SharedLibraryLong * _Nullable)estadoAutenticacionNuevo uuid:(NSString *)uuid idFirebase:(NSString *)idFirebase password:(NSString * _Nullable)password __attribute__((swift_name("init(username:estadoAutenticacion:estadoAutenticacionNuevo:uuid:idFirebase:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibraryLoginRequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedLibraryLoginRequest *)doCopyUsername:(NSString *)username estadoAutenticacion:(int64_t)estadoAutenticacion estadoAutenticacionNuevo:(SharedLibraryLong * _Nullable)estadoAutenticacionNuevo uuid:(NSString *)uuid idFirebase:(NSString *)idFirebase password:(NSString * _Nullable)password __attribute__((swift_name("doCopy(username:estadoAutenticacion:estadoAutenticacionNuevo:uuid:idFirebase:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t estadoAutenticacion __attribute__((swift_name("estadoAutenticacion")));
@property (readonly) SharedLibraryLong * _Nullable estadoAutenticacionNuevo __attribute__((swift_name("estadoAutenticacionNuevo")));
@property (readonly) NSString *idFirebase __attribute__((swift_name("idFirebase")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest.Companion")))
@interface SharedLibraryLoginRequestCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibraryLoginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponse")))
@interface SharedLibraryLoginResponse : SharedLibraryBase
- (instancetype)initWithPopupPrimTrx:(SharedLibraryBoolean * _Nullable)popupPrimTrx participante:(SharedLibraryParticipante * _Nullable)participante refreshToken:(NSString * _Nullable)refreshToken token:(NSString * _Nullable)token timestamp:(NSString * _Nullable)timestamp status:(SharedLibraryLong * _Nullable)status error:(NSString * _Nullable)error message:(NSString * _Nullable)message path:(NSString * _Nullable)path perfil:(SharedLibraryPerfil * _Nullable)perfil __attribute__((swift_name("init(popupPrimTrx:participante:refreshToken:token:timestamp:status:error:message:path:perfil:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibraryLoginResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedLibraryLoginResponse *)doCopyPopupPrimTrx:(SharedLibraryBoolean * _Nullable)popupPrimTrx participante:(SharedLibraryParticipante * _Nullable)participante refreshToken:(NSString * _Nullable)refreshToken token:(NSString * _Nullable)token timestamp:(NSString * _Nullable)timestamp status:(SharedLibraryLong * _Nullable)status error:(NSString * _Nullable)error message:(NSString * _Nullable)message path:(NSString * _Nullable)path perfil:(SharedLibraryPerfil * _Nullable)perfil __attribute__((swift_name("doCopy(popupPrimTrx:participante:refreshToken:token:timestamp:status:error:message:path:perfil:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) SharedLibraryParticipante * _Nullable participante __attribute__((swift_name("participante")));
@property (readonly) NSString * _Nullable path __attribute__((swift_name("path")));
@property (readonly) SharedLibraryPerfil * _Nullable perfil __attribute__((swift_name("perfil")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="popup_prim_trx")
*/
@property (readonly) SharedLibraryBoolean * _Nullable popupPrimTrx __attribute__((swift_name("popupPrimTrx")));
@property (readonly) NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@property (readonly) SharedLibraryLong * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponse.Companion")))
@interface SharedLibraryLoginResponseCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibraryLoginResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginType")))
@interface SharedLibraryLoginType : SharedLibraryKotlinEnum<SharedLibraryLoginType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLibraryLoginType *direct __attribute__((swift_name("direct")));
@property (class, readonly) SharedLibraryLoginType *normal __attribute__((swift_name("normal")));
@property (class, readonly) SharedLibraryLoginType *first __attribute__((swift_name("first")));
@property (class, readonly) SharedLibraryLoginType *passwordless __attribute__((swift_name("passwordless")));
@property (class, readonly) SharedLibraryLoginType *forceupdate __attribute__((swift_name("forceupdate")));
@property (class, readonly) SharedLibraryLoginType *blacklist __attribute__((swift_name("blacklist")));
@property (class, readonly) SharedLibraryLoginType *deleteduser __attribute__((swift_name("deleteduser")));
+ (SharedLibraryKotlinArray<SharedLibraryLoginType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedLibraryLoginType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Network")))
@interface SharedLibraryNetwork : SharedLibraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUATUrlWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUATUrl(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUrlUrl:(NSString *)url completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUrl(url:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doInitAppWithCompletionHandler:(void (^)(SharedLibraryLoginType * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doInitApp(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginLoginRequest:(SharedLibraryLoginRequest *)loginRequest completionHandler:(void (^)(SharedLibraryLoginType * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(loginRequest:completionHandler:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)splashRequest:(SharedLibrarySplashRequest *)request completionHandler:(void (^)(SharedLibraryLoginType * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("splash(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkUtils")))
@interface SharedLibraryNetworkUtils : SharedLibraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkUtils.Endpoints")))
@interface SharedLibraryNetworkUtilsEndpoints : SharedLibraryBase
- (instancetype)initWith:(SharedLibraryNetworkUtils *)receiver __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));
- (NSString *)countries __attribute__((swift_name("countries()")));
- (NSString *)jobs __attribute__((swift_name("jobs()")));
- (NSString *)listCountryPrefxis __attribute__((swift_name("listCountryPrefxis()")));
- (NSString *)login __attribute__((swift_name("login()")));
- (NSString *)logout __attribute__((swift_name("logout()")));
- (NSString *)privacyPolicy __attribute__((swift_name("privacyPolicy()")));
- (NSString *)recoverPassword __attribute__((swift_name("recoverPassword()")));
- (NSString *)register __attribute__((swift_name("register()")));
- (NSString *)registerCompany __attribute__((swift_name("registerCompany()")));
- (NSString *)registerPerson __attribute__((swift_name("registerPerson()")));
- (NSString *)relationship __attribute__((swift_name("relationship()")));
- (NSString *)resetPassword __attribute__((swift_name("resetPassword()")));
- (NSString *)splash __attribute__((swift_name("splash()")));
- (NSString *)validateDoc __attribute__((swift_name("validateDoc()")));
- (NSString *)validateEmail __attribute__((swift_name("validateEmail()")));
- (NSString *)validateEmailAndNumber __attribute__((swift_name("validateEmailAndNumber()")));
- (NSString *)validateNumber __attribute__((swift_name("validateNumber()")));
- (NSString *)verifyEmail __attribute__((swift_name("verifyEmail()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Participante")))
@interface SharedLibraryParticipante : SharedLibraryBase
- (instancetype)initWithFechaNacimiento:(NSString * _Nullable)fechaNacimiento usuarioParticipante:(NSString *)usuarioParticipante nombreParticipante:(NSString *)nombreParticipante idParticipante:(int64_t)idParticipante tipoParticipante:(int64_t)tipoParticipante estadoParticipante:(int64_t)estadoParticipante __attribute__((swift_name("init(fechaNacimiento:usuarioParticipante:nombreParticipante:idParticipante:tipoParticipante:estadoParticipante:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibraryParticipanteCompanion *companion __attribute__((swift_name("companion")));
- (SharedLibraryParticipante *)doCopyFechaNacimiento:(NSString * _Nullable)fechaNacimiento usuarioParticipante:(NSString *)usuarioParticipante nombreParticipante:(NSString *)nombreParticipante idParticipante:(int64_t)idParticipante tipoParticipante:(int64_t)tipoParticipante estadoParticipante:(int64_t)estadoParticipante __attribute__((swift_name("doCopy(fechaNacimiento:usuarioParticipante:nombreParticipante:idParticipante:tipoParticipante:estadoParticipante:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t estadoParticipante __attribute__((swift_name("estadoParticipante")));
@property (readonly) NSString * _Nullable fechaNacimiento __attribute__((swift_name("fechaNacimiento")));
@property (readonly) int64_t idParticipante __attribute__((swift_name("idParticipante")));
@property (readonly) NSString *nombreParticipante __attribute__((swift_name("nombreParticipante")));
@property (readonly) int64_t tipoParticipante __attribute__((swift_name("tipoParticipante")));
@property (readonly) NSString *usuarioParticipante __attribute__((swift_name("usuarioParticipante")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Participante.Companion")))
@interface SharedLibraryParticipanteCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibraryParticipanteCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Perfil")))
@interface SharedLibraryPerfil : SharedLibraryBase
- (instancetype)initWithParticipanteNivel:(int64_t)participanteNivel idPerfil:(int64_t)idPerfil tipoPerfil:(int64_t)tipoPerfil nombrePerfil:(NSString *)nombrePerfil __attribute__((swift_name("init(participanteNivel:idPerfil:tipoPerfil:nombrePerfil:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibraryPerfilCompanion *companion __attribute__((swift_name("companion")));
- (SharedLibraryPerfil *)doCopyParticipanteNivel:(int64_t)participanteNivel idPerfil:(int64_t)idPerfil tipoPerfil:(int64_t)tipoPerfil nombrePerfil:(NSString *)nombrePerfil __attribute__((swift_name("doCopy(participanteNivel:idPerfil:tipoPerfil:nombrePerfil:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t idPerfil __attribute__((swift_name("idPerfil")));
@property (readonly) NSString *nombrePerfil __attribute__((swift_name("nombrePerfil")));
@property (readonly) int64_t participanteNivel __attribute__((swift_name("participanteNivel")));
@property (readonly) int64_t tipoPerfil __attribute__((swift_name("tipoPerfil")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Perfil.Companion")))
@interface SharedLibraryPerfilCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibraryPerfilCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SecurexFlow")))
@interface SharedLibrarySecurexFlow : SharedLibraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doInitAppEnvironment:(SharedLibraryEnvironment *)environment appVersion:(NSString *)appVersion uuid:(NSString *)uuid completionHandler:(void (^)(SharedLibraryLoginType * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doInitApp(environment:appVersion:uuid:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplashRequest")))
@interface SharedLibrarySplashRequest : SharedLibraryBase
- (instancetype)initWithDispositivo:(NSString *)dispositivo idUUID:(NSString *)idUUID version:(SharedLibrarySplashRequestVersion *)version __attribute__((swift_name("init(dispositivo:idUUID:version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibrarySplashRequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedLibrarySplashRequest *)doCopyDispositivo:(NSString *)dispositivo idUUID:(NSString *)idUUID version:(SharedLibrarySplashRequestVersion *)version __attribute__((swift_name("doCopy(dispositivo:idUUID:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dispositivo __attribute__((swift_name("dispositivo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idUuid")
*/
@property (readonly) NSString *idUUID __attribute__((swift_name("idUUID")));
@property (readonly) SharedLibrarySplashRequestVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplashRequest.Companion")))
@interface SharedLibrarySplashRequestCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibrarySplashRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplashRequestVersion")))
@interface SharedLibrarySplashRequestVersion : SharedLibraryBase
- (instancetype)initWithVersion:(NSString *)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibrarySplashRequestVersionCompanion *companion __attribute__((swift_name("companion")));
- (SharedLibrarySplashRequestVersion *)doCopyVersion:(NSString *)version __attribute__((swift_name("doCopy(version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplashRequestVersion.Companion")))
@interface SharedLibrarySplashRequestVersionCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibrarySplashRequestVersionCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplashResponse")))
@interface SharedLibrarySplashResponse : SharedLibraryBase
- (instancetype)initWithEstadoDispositivo:(SharedLibraryLong * _Nullable)estadoDispositivo estadoAutenticacion:(SharedLibraryLong * _Nullable)estadoAutenticacion correo:(NSString * _Nullable)correo version:(SharedLibrarySplashResponseVersion * _Nullable)version popup:(NSString * _Nullable)popup __attribute__((swift_name("init(estadoDispositivo:estadoAutenticacion:correo:version:popup:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibrarySplashResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedLibrarySplashResponse *)doCopyEstadoDispositivo:(SharedLibraryLong * _Nullable)estadoDispositivo estadoAutenticacion:(SharedLibraryLong * _Nullable)estadoAutenticacion correo:(NSString * _Nullable)correo version:(SharedLibrarySplashResponseVersion * _Nullable)version popup:(NSString * _Nullable)popup __attribute__((swift_name("doCopy(estadoDispositivo:estadoAutenticacion:correo:version:popup:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable correo __attribute__((swift_name("correo")));
@property (readonly) SharedLibraryLong * _Nullable estadoAutenticacion __attribute__((swift_name("estadoAutenticacion")));
@property (readonly) SharedLibraryLong * _Nullable estadoDispositivo __attribute__((swift_name("estadoDispositivo")));
@property (readonly) NSString * _Nullable popup __attribute__((swift_name("popup")));
@property (readonly) SharedLibrarySplashResponseVersion * _Nullable version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplashResponse.Companion")))
@interface SharedLibrarySplashResponseCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibrarySplashResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplashResponseVersion")))
@interface SharedLibrarySplashResponseVersion : SharedLibraryBase
- (instancetype)initWithValue:(NSString *)value obligatorio:(BOOL)obligatorio __attribute__((swift_name("init(value:obligatorio:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibrarySplashResponseVersionCompanion *companion __attribute__((swift_name("companion")));
- (SharedLibrarySplashResponseVersion *)doCopyValue:(NSString *)value obligatorio:(BOOL)obligatorio __attribute__((swift_name("doCopy(value:obligatorio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL obligatorio __attribute__((swift_name("obligatorio")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SplashResponseVersion.Companion")))
@interface SharedLibrarySplashResponseVersionCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibrarySplashResponseVersionCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlResponse")))
@interface SharedLibraryUrlResponse : SharedLibraryBase
- (instancetype)initWithRuta:(NSString *)ruta __attribute__((swift_name("init(ruta:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLibraryUrlResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedLibraryUrlResponse *)doCopyRuta:(NSString *)ruta __attribute__((swift_name("doCopy(ruta:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *ruta __attribute__((swift_name("ruta")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlResponse.Companion")))
@interface SharedLibraryUrlResponseCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibraryUrlResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedLibraryPlatform_iosKt : SharedLibraryBase
+ (id<SharedLibraryPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
+ (void)doInitLogger __attribute__((swift_name("doInitLogger()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferenceKt")))
@interface SharedLibraryPreferenceKt : SharedLibraryBase
+ (BOOL)getBool:(NSObject *)receiver key:(NSString *)key default:(BOOL)default_ __attribute__((swift_name("getBool(_:key:default:)")));
+ (int32_t)getInt:(NSObject *)receiver key:(NSString *)key default:(int32_t)default_ __attribute__((swift_name("getInt(_:key:default:)")));
+ (NSString * _Nullable)getString:(NSObject *)receiver key:(NSString *)key __attribute__((swift_name("getString(_:key:)")));
+ (void)putBool:(NSObject *)receiver key:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBool(_:key:value:)")));
+ (void)putInt:(NSObject *)receiver key:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(_:key:value:)")));
+ (void)putString:(NSObject *)receiver key:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(_:key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedLibraryKotlinEnumCompanion : SharedLibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLibraryKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedLibraryKotlinArray<T> : SharedLibraryBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedLibraryInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedLibraryKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedLibraryKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedLibraryKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedLibraryKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedLibraryKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedLibraryKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedLibraryKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedLibraryKotlinx_serialization_coreKSerializer <SharedLibraryKotlinx_serialization_coreSerializationStrategy, SharedLibraryKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedLibraryKotlinThrowable : SharedLibraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedLibraryKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLibraryKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedLibraryKotlinException : SharedLibraryKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedLibraryKotlinRuntimeException : SharedLibraryKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedLibraryKotlinIllegalStateException : SharedLibraryKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedLibraryKotlinCancellationException : SharedLibraryKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedLibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedLibraryKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedLibraryKotlinx_serialization_coreEncoder
@required
- (id<SharedLibraryKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedLibraryKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedLibraryKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedLibraryKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedLibraryKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedLibraryKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedLibraryKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedLibraryKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedLibraryKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedLibraryKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedLibraryKotlinx_serialization_coreDecoder
@required
- (id<SharedLibraryKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedLibraryKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedLibraryKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedLibraryKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedLibraryKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedLibraryKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedLibraryKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedLibraryKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedLibraryKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedLibraryKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedLibraryKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedLibraryKotlinx_serialization_coreSerializersModule : SharedLibraryBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedLibraryKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedLibraryKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedLibraryKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedLibraryKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedLibraryKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedLibraryKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedLibraryKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedLibraryKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedLibraryKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedLibraryKotlinx_serialization_coreSerialKind : SharedLibraryBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedLibraryKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedLibraryKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedLibraryKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedLibraryKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedLibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedLibraryKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedLibraryKotlinNothing : SharedLibraryBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedLibraryKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedLibraryKotlinKClass>)kClass provider:(id<SharedLibraryKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedLibraryKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedLibraryKotlinKClass>)kClass serializer:(id<SharedLibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedLibraryKotlinKClass>)baseClass actualClass:(id<SharedLibraryKotlinKClass>)actualClass actualSerializer:(id<SharedLibraryKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedLibraryKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedLibraryKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedLibraryKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedLibraryKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedLibraryKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedLibraryKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedLibraryKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedLibraryKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedLibraryKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedLibraryKotlinKClass <SharedLibraryKotlinKDeclarationContainer, SharedLibraryKotlinKAnnotatedElement, SharedLibraryKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
