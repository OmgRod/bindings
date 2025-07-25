#pragma once

// Needed for GEODE_IS_MACOS
#include <Geode/platform/cplatform.h>

struct TodoReturnPlaceholder;
using TodoReturn = TodoReturnPlaceholder;

// thanks pie
enum class SearchType {
    Search = 0,
    Downloaded = 1,
    MostLiked = 2,
    Trending = 3,
    Recent = 4,
    UsersLevels = 5,
    Featured = 6,
    Magic = 7,
    Sends = 8,
    MapPack = 9,
    MapPackOnClick = 10,
    Awarded = 11,
    Followed = 12,
    Friends = 13,
    Users = 14,
    LikedGDW = 15,
    HallOfFame = 16,
    FeaturedGDW = 17,
    Similar = 18,
    Type19 = 19,
    TopListsUnused = 20,
    DailySafe = 21,
    WeeklySafe = 22,
    EventSafe = 23,
    Reported = 24,
    LevelListsOnClick = 25,
    Type26 = 26,
    Sent = 27,
    FeaturedLite = 28,
    Bonus = 29,
    MyLevels = 98,
    SavedLevels = 99,
    FavouriteLevels = 100,
    SmartTemplates = 101,
    MyLists = 102,
    FavouriteLists = 103
};

enum class GameObjectType {
    Solid = 0,
    Hazard = 2,
    InverseGravityPortal = 3,
    NormalGravityPortal = 4,
    ShipPortal = 5,
    CubePortal = 6,
    Decoration = 7,
    YellowJumpPad = 8,
    PinkJumpPad = 9,
    GravityPad = 10,
    YellowJumpRing = 11,
    PinkJumpRing = 12,
    GravityRing = 13,
    InverseMirrorPortal = 14,
    NormalMirrorPortal = 15,
    BallPortal = 16,
    RegularSizePortal = 17,
    MiniSizePortal = 18,
    UfoPortal = 19,
    Modifier = 20,
    Breakable = 21,
    SecretCoin = 22,
    DualPortal = 23,
    SoloPortal = 24,
    Slope = 25,
    WavePortal = 26,
    RobotPortal = 27,
    TeleportPortal = 28,
    GreenRing = 29,
    Collectible = 30,
    UserCoin = 31,
    DropRing = 32,
    SpiderPortal = 33,
    RedJumpPad = 34,
    RedJumpRing = 35,
    CustomRing = 36,
    DashRing = 37,
    GravityDashRing = 38,
    CollisionObject = 39,
    Special = 40,
    SwingPortal = 41,
    GravityTogglePortal = 42,
    SpiderOrb = 43,
    SpiderPad = 44,
    EnterEffectObject = 45,
    TeleportOrb = 46,
    AnimatedHazard = 47,
};

enum class GJGameEvent {
    None = 0,
    TinyLanding = 1,
    FeatherLanding = 2,
    SoftLanding = 3,
    NormalLanding = 4,
    HardLanding = 5,
    HitHead = 6,
    OrbTouched = 7,
    OrbActivated = 8,
    PadActivated = 9,
    GravityInverted = 10,
    GravityRestored = 11,
    NormalJump = 12,
    RobotBoostStart = 13,
    RobotBoostStop = 14,
    UFOJump = 15,
    ShipBoostStart = 16,
    ShipBoostEnd = 17,
    SpiderTeleport = 18,
    BallSwitch = 19,
    SwingSwitch = 20,
    WavePush = 21,
    WaveRelease = 22,
    DashStart = 23,
    DashStop = 24,
    Teleported = 25,
    PortalNormal = 26,
    PortalShip = 27,
    PortalBall = 28,
    PortalUFO = 29,
    PortalWave = 30,
    PortalRobot = 31,
    PortalSpider = 32,
    PortalSwing = 33,
    YellowOrb = 34,
    PinkOrb = 35,
    RedOrb = 36,
    GravityOrb = 37,
    GreenOrb = 38,
    DropOrb = 39,
    CustomOrb = 40,
    DashOrb = 41,
    GravityDashOrb = 42,
    SpiderOrb = 43,
    TeleportOrb = 44,
    YellowPad = 45,
    PinkPad = 46,
    RedPad = 47,
    GravityPad = 48,
    SpiderPad = 49,
    PortalGravityFlip = 50,
    PortalGravityNormal = 51,
    PortalGravityInvert = 52,
    PortalFlip = 53,
    PortalUnFlip = 54,
    PortalNormalScale = 55,
    PortalMiniScale = 56,
    PortalDualOn = 57,
    PortalDualOff = 58,
    PortalTeleport = 59,
    Checkpoint = 60,
    DestroyBlock = 61,
    UserCoin = 62,
    PickupItem = 63,
    CheckpointRespawn = 64,
    FallLow = 65,
    FallMed = 66,
    FallHigh = 67,
    FallVHigh = 68,
    JumpPush = 69,
    JumpRelease = 70,
    LeftPush = 71,
    LeftRelease = 72,
    RightPush = 73,
    RightRelease = 74,
    PlayerReversed = 75,
    FallSpeedLow = 76,
    FallSpeedMed = 77,
    FallSpeedHigh = 78
};

enum class PulseEffectType {
    Default = 0,
    Hsv = 1,
    Color = 2,
};
enum class TouchTriggerType {
    Normal = 0,
    ToggleOn = 1,
    ToggleOff = 2,
};
enum class PlayerButton {
    Jump = 1,
    Left = 2,
    Right = 3,
};
enum class GhostType {
    Disabled = 0,
    Enabled = 1,
};
enum class TableViewCellEditingStyle {
};
enum class UserListType {
    Friends = 0,
    Blocked = 1,
};
enum class GJErrorCode {
    NotFound = -1,
    UpdateApp = 3
};
enum class AccountError {
    EmailsDoNotMatch = -99,
    AlreadyLinkedToDifferentSteamAccount = -13,
    AccountDisabled = -12,
    AlreadyLinkedToDifferentAccount = -10,
    TooShortLessThan3 = -9,
    TooShortLessThan6 = -8,
    PasswordsDoNotMatch = -7,
    InvalidEmail = -6,
    InvalidPassword = -5,
    InvalidUsername = -4,
    AlreadyUsedEmail = -3,
    AlreadyUsedUsername = -2
};
enum class GJSongError {
    DownloadSongFailed = 1,
    DownloadSFXFailed = 2
};
enum class GJSongType {
    Music = -1,
    NCS = 1,
};
enum class LikeItemType {
    Unknown = 0,
    Level = 1,
    Comment = 2,
    AccountComment = 3,
    LevelList = 4
};

enum class CommentError {
    Failed = 0,
    Banned = 1
};
enum class BackupAccountError {
    BackupOrSyncFailed = -3,
    LoginFailed = -2
};
enum class GJMusicAction {
    DownloadOrUpdate = 2,
    UpdateSFXLibrary = 4,
    UpdateMusicLibrary = 6
};
enum class CellAction {
    Click = 1,
    Delete = 2,
    Up = 3,
    Down = 4,
    Swap = 5,
    Edit = 6
};
enum class GJActionCommand {
    Stop = 0,
    Pause = 1,
    Resume = 2
};
enum class DifficultyIconType {
    ShortText = 0,
    DefaultText = 1,
    NoText = 2
};
enum class GauntletType {
    Fire = 1,
    Ice = 2,
    Poison = 3,
    Shadow = 4,
    Lava = 5,
    Bonus = 6,
    Chaos = 7,
    Demon = 8,
    Time = 9,
    Crystal = 0xA,
    Magic = 0xB,
    Spike = 0xC,
    Monster = 0xD,
    Doom = 0xE,
    Death = 0xF,
    Forest = 0x10,
    Rune = 0x11,
    Force = 0x12,
    Spooky = 0x13,
    Dragon = 0x14,
    Water = 0x15,
    Haunted = 0x16,
    Acid = 0x17,
    Witch = 0x18,
    Power = 0x19,
    Potion = 0x1A,
    Snake = 0x1B,
    Toxic = 0x1C,
    Halloween = 0x1D,
    Treasure = 0x1E,
    Ghost = 0x1F,
    Spider = 0x20,
    Gem = 0x21,
    Inferno = 0x22,
    Portal = 0x23,
    Strange = 0x24,
    Fantasy = 0x25,
    Christmas = 0x26,
    Surprise = 0x27,
    Mystery = 0x28,
    Cursed = 0x29,
    Cyborg = 0x2A,
    Castle = 0x2B,
    Grave = 0x2C,
    Temple = 0x2D,
    World = 0x2E,
    Galaxy = 0x2F,
    Universe = 0x30,
    Discord = 0x31,
    Split = 0x32,
    NCS = 0x33,
    NCS2 = 0x34,
    Space = 0x35,
    Cosmos = 0x36
};
enum class GJMPErrorCode {
    Failed = 0
};
enum class GJTimedLevelType {
    Daily = 0,
    Weekly = 1,
    Event = 2
};
enum class SongSelectType {
    Default = 0,
    Custom = 1
};
enum class AudioTargetType {
    SFXChannel = 0,
    SFXGroup = 1,
    MusicChannel = 2
};
enum class FMODReverbPreset {
    Generic = 0,
    PaddedCell = 1,
    Room = 2,
    Bathroom = 3,
    Livingroom = 4,
    Stoneroom = 5,
    Auditorium = 6,
    ConvertHall = 7,
    Cave = 8,
    Arena = 9,
    Hangar = 0xA,
    CarpettedHallway = 0xB,
    Hallway = 0xC,
    StoneCorridor = 0xD,
    Alley = 0xE,
    Forest = 0xF,
    City = 0x10,
    Mountains = 0x11,
    Quarry = 0x12,
    Plain = 0x13,
    ParkingLot = 0x14,
    SewerPipe = 0x15,
    Underwater = 0x16
};
enum class DemonDifficultyType {
    HardDemon = 0,
    EasyDemon = 3,
    MediumDemon = 4,
    InsaneDemon = 5,
    ExtremeDemon = 6
};
enum class PlayerCollisionDirection {
    Top = 0,
    Bottom = 1,
    Left = 2,
    Right = 3
};
enum class ChestSpriteState {
    Locked = 1,
    Closed = 2,
    Opening = 3,
    Opened = 4
};
enum class FormatterType {
    Integer = 0,
    Float = 1
};
enum class AudioModType {
    Volume = 0,
    Pitch = 1
};
enum class GJAreaActionType {
    Move = 0,
    Rotate = 1,
    Scale = 2,
    Fade = 3,
    Tint = 4
};
enum class GJSmartDirection {
    Top = 1,
    Bottom = 2,
    Left = 3,
    Right = 4,
    TopLeft = 5,
    TopRight = 6,
    BottomLeft = 7,
    BottomRight = 8
};
enum class SmartBlockType {
    Block = 0x31,
    NormalSlope1 = 0x32,
    NormalSlope2 = 0x33,
    NormalSlope3 = 0x34,
    NormalSlope4 = 0x35,
    WideSlope1 = 0x36,
    WideSlope2 = 0x37,
    WideSlope3 = 0x38,
    WideSlope4 = 0x39,
    WideSlope5 = 0x41,
    WideSlope6 = 0x42,
    WideSlope7 = 0x43,
    WideSlope8 = 0x44,
    WideSlope9 = 0x45,
    WideSlope10 = 0x46,
    WideSlope11 = 0x47,
    WideSlope12 = 0x48,
    WideSlope13 = 0x49,
    WideSlope14 = 0x4A,
    WideSlope15 = 0x4B,
    WideSlope16 = 0x4C
};
enum class TouchTriggerControl {
    Both = 0,
    Player1 = 1,
    Player2 = 2
};
enum class AudioSortType {
    NameAscending = 0,
    NameDescending = 1,
    LengthAscending = 2,
    LengthDescending = 3,
    IDAscending = 4,
    IDDescending = 5,
    SongOrder = 6
};
enum class spriteMode {
    FrameByFrame = 1,
    PartAnim = 2
};
enum class GJAssetType {
    Song = 1,
    SFX = 2
};
enum class CommentKeyType {
    Level = 0,
    User = 1,
    LevelList = 2
};
enum class LevelLeaderboardMode {
    Time = 0,
    Points = 1
};
enum class StatKey {
    FirePath = 30,
    IcePath = 31,
    PoisonPath = 32,
    ShadowPath = 33,
    LavaPath = 34,
    EarthPath = 35,
    BloodPath = 36,
    MetalPath = 37,
    LightPath = 38,
    SoulPath = 39
};
enum class TextStyleType {
    Colored = 1,
    Instant = 2,
    Shake = 3,
    Delayed = 4
};
enum class InputValueType {
    Float = 1,
    Int = 2,
    Uint = 3,
};
enum class GJInputStyle {
    // Golden label
    GoldLabel = 0,
    // chatFont label
    ChatLabel = 1,
};
enum class GJDifficultyName {
    Short = 0,
    Long = 1
};
enum class GJFeatureState {
    None = 0,
    Featured = 1,
    Epic = 2,
    Legendary = 3,
    Mythic = 4
};
enum class GJKeyGroup {};
enum class GJKeyCommand {};
enum class SelectSettingType {
    StartingModeClassic = 0,
    StartingModePlatformer = 1,
    StartingSpeed = 2,
};
enum class gjParticleValue {
    MaxParticles = 1,
    Duration = 2,
    Lifetime = 3,
    PlusMinus1 = 4,
    Emission = 5,
    Angle = 6,
    PlusMinus2 = 7,
    Speed = 8,
    PlusMinus3 = 9,
    PosVarX = 0xA,
    PosVarY = 0xB,
    GravityX = 0xC,
    GravityY = 0xD,
    AccelRad = 0xE,
    PlusMinus4 = 0xF,
    AccelTan = 0x10,
    PlusMinus5 = 0x11,
    StartSize = 0x12,
    PlusMinus6 = 0x13,
    EndSize = 0x14,
    PlusMinus7 = 0x15,
    StartSpin = 0x16,
    PlusMinus8 = 0x17,
    EndSpin = 0x18,
    PlusMinus9 = 0x19,
    StartR = 0x1A,
    PlusMinus10 = 0x1B,
    StartG = 0x1C,
    PlusMinus11 = 0x1D,
    StartB = 0x1E,
    PlusMinus12 = 0x1F,
    StartA = 0x20,
    PlusMinus13 = 0x21,
    EndR = 0x22,
    PlusMinus14 = 0x23,
    EndG = 0x24,
    PlusMinus15 = 0x25,
    EndB = 0x26,
    PlusMinus16 = 0x27,
    EndA = 0x28,
    PlusMinus17 = 0x29,
    FadeIn = 0x2A,
    PlusMinus18 = 0x2B,
    FadeOut = 0x2C,
    PlusMinus19 = 0x2D,
    FrictionP = 0x2E,
    PlusMinus20 = 0x2F,
    Respawn = 0x30,
    PlusMinus21 = 0x31,
    StartRad = 0x32,
    PlusMinus22 = 0x33,
    EndRad = 0x34,
    PlusMinus23 = 0x35,
    RotSec = 0x36,
    PlusMinus24 = 0x37,
    FrictionS = 0x45,
    PlusMinus25 = 0x46,
    FrictionR = 0x47,
    PlusMinus26 = 0x48
};
enum class ColorSelectType {
    Pulse = 0,
    Color = 1,
    Filter = 2
};
enum class AudioGuidelinesType {
    GuidelineCreator = 0,
    BPMFinder = 1
};
enum class SmartBrowseFilter {};
enum class GJUITouchEvent {
    Pressed = 0,
    Moved = 1,
    Ended = 2
};
enum class ObjectScaleType {
    XY = 0,
    X = 1,
    Y = 2
};

// Thanks cocoa!
#ifdef GEODE_IS_MACOS
    #undef CommentType
#endif

enum class CommentType {
    Level = 0,
    Account = 1,
    FriendRequest = 2,
    ListDescription = 4,
};

enum class BoomListType {
    Default = 0x0,
    User = 0x2,
    Stats = 0x3,
    Achievement = 0x4,
    Level = 0x5,
    Level2 = 0x6,
    Comment = 0x7,
    Comment2 = 0x8,
    Comment3 = 0x9,
    Song = 0xc,
    Score = 0xd,
    MapPack = 0xe,
    CustomSong = 0xf,
    Comment4 = 0x10,
    User2 = 0x11,
    Request = 0x12,
    Message = 0x13,
    LevelScore = 0x14,
    Artist = 0x15,
    SmartTemplate = 0x16,
    SFX = 0x17,
    SFX2 = 0x18,
    CustomMusic = 0x19,
    Options = 0x1a,
    LevelList = 0x1b,
    Level3 = 0x1c,
    LevelList2 = 0x1d,
    LevelList3 = 0x1e,
    Level4 = 0x1f,
    LocalLevelScore = 0x21,
    URL = 0x22,
};

enum class CurrencySpriteType {
    Icon = 0,
    Orb = 1,
    Star = 2,
    Diamond = 3,
    FireShard = 4,
    IceShard = 5,
    PoisonShard = 6,
    ShadowShard = 7,
    LavaShard = 8,
    DemonKey = 9,
    EarthShard = 10,
    BloodShard = 11,
    MetalShard = 12,
    LightShard = 13,
    SoulShard = 14,
    Moon = 15
};

enum class CurrencyRewardType {
    // todo
};

enum class MenuAnimationType {
    Scale = 0,
    Move = 1,
};

enum class ShopType {
    Normal = 0,
    Secret = 1,
    Community = 2,
    Mechanic = 3,
    Diamond = 4,
    Paths = 5
};

// Geode Addition
enum class ZLayer {
    B5 = -5,
    B4 = -3,
    B3 = -1,
    B2 = 1,
    B1 = 3,
    Default = 0,
    T1 = 5,
    T2 = 7,
    T3 = 9,
    T4 = 11,
};

enum class UpdateResponse {
    Unknown,
    UpToDate,
    GameVerOutOfDate,
    UpdateSuccess,
};

enum class UnlockType {
    Cube = 0x1,
    Col1 = 0x2,
    Col2 = 0x3,
    Ship = 0x4,
    Ball = 0x5,
    Bird = 0x6,
    Dart = 0x7,
    Robot = 0x8,
    Spider = 0x9,
    Streak = 0xA,
    Death = 0xB,
    GJItem = 0xC,
    Swing = 0xD,
    Jetpack = 0xE,
    ShipFire = 0xF
};

enum class SpecialRewardItem {
    FireShard = 0x1,
    IceShard = 0x2,
    PoisonShard = 0x3,
    ShadowShard = 0x4,
    LavaShard = 0x5,
    BonusKey = 0x6,
    Orbs = 0x7,
    Diamonds = 0x8,
    CustomItem = 0x9,
    EarthShard = 0xA,
    BloodShard = 0xB,
    MetalShard = 0xC,
    LightShard = 0xD,
    SoulShard = 0xE,
    GoldKey = 0xF
};

enum class EditCommand {
    SmallLeft = 1,
    SmallRight = 2,
    SmallUp = 3,
    SmallDown = 4,

    Left = 5,
    Right = 6,
    Up = 7,
    Down = 8,

    BigLeft = 9,
    BigRight = 10,
    BigUp = 11,
    BigDown = 12,

    TinyLeft = 13,
    TinyRight = 14,
    TinyUp = 15,
    TinyDown = 16,

    HalfLeft = 17,
    HalfRight = 18,
    HalfUp = 19,
    HalfDown = 20,

    FlipX = 21,
    FlipY = 22,
    RotateCW = 23,
    RotateCCW = 24,
    RotateCW45 = 25,
    RotateCCW45 = 26,
    RotateFree = 27,
    RotateSnap = 28,

    Scale = 29,
    ScaleXY = 30,
    Skew = 31
};

// Geode Addition
enum class PlaybackMode {
    Not = 0,
    Playing = 1,
    Paused = 2,
};

enum class SelectArtType {
    Background = 0,
    Ground = 1,
    Middleground = 2,
};

enum class UndoCommand {
    Delete = 1,
    New = 2,
    Paste = 3,
    DeleteMulti = 4,
    Transform = 5,
    Select = 6,
};

enum class EasingType {
    None = 0,
    EaseInOut = 1,
    EaseIn = 2,
    EaseOut = 3,
    ElasticInOut = 4,
    ElasticIn = 5,
    ElasticOut = 6,
    BounceInOut = 7,
    BounceIn = 8,
    BounceOut = 9,
    ExponentialInOut = 10,
    ExponentialIn = 11,
    ExponentialOut = 12,
    SineInOut = 13,
    SineIn = 14,
    SineOut = 15,
    BackInOut = 16,
    BackIn = 17,
    BackOut = 18,
};

enum class GJDifficulty {
    NA = -1,
    Auto = 0,
    Easy = 1,
    Normal = 2,
    Hard = 3,
    Harder = 4,
    Insane = 5,
    Demon = 6,
    DemonEasy = 7,
    DemonMedium = 8,
    DemonInsane = 9,
    DemonExtreme = 10
};

enum class GJLevelType {
    Default = 0,
    Local = 1,
    Editor = 2,
    Saved = 3
};

enum class GJRewardType
{
    Unknown = 0x0,
    Small = 0x1,
    Large = 0x2,
    SmallTreasure = 0x3,
    LargeTreasure = 0x4,
    Key10Treasure = 0x5,
    Key25Treasure = 0x6,
    Key50Treasure = 0x7,
    Key100Treasure = 0x8,
    Gold = 0x9
};

enum class IconType {
    Cube = 0,
    Ship = 1,
    Ball = 2,
    Ufo = 3,
    Wave = 4,
    Robot = 5,
    Spider = 6,
    Swing = 7,
    Jetpack = 8,
    DeathEffect = 98,
    Special = 99,
    Item = 100,
    ShipFire = 101,
};

enum class GJChallengeType {
    Unknown = 0,
    Orbs = 1,
    UserCoins = 2,
    Stars = 3,
    Moons = 4,
};

enum class GJScoreType {
    Unknown = 0,
    Creator = 1
};

enum class LevelLeaderboardType {
    Friends = 0,
    Global = 1,
    Weekly = 2
};

enum class GJHttpType {
    UploadLevel = 0x1,
    GetOnlineLevels = 0x2,
    GetMapPacks = 0x3,
    DownloadLevel = 0x4,
    UpdateLevel = 0x5,
    RateStars = 0x6,
    DeleteServerLevel = 0x7,
    SetLevelStars = 0x8,
    SetLevelFeatured = 0x9,
    UpdateUserScore = 0xA,
    GetLeaderboardScores = 0xB,
    GetLevelComments = 0xC,
    UploadComment = 0xD,
    DeleteComment = 0xE,
    LikeItem = 0xF,
    RestoreItems = 0x10,
    SubmitUserInfo = 0x11,
    ReportLevel = 0x12,
    GetSongInfo = 0x13,
    BackupAccount = 0x14,
    SyncAccount = 0x15,
    RegisterAccount = 0x16,
    LoginAccount = 0x17,
    UpdateDescription = 0x18,
    GetAccountComments = 0x19,
    UpdateAccountSettings = 0x1A,
    GetGJUserInfo = 0x1B,
    GetFriendRequests = 0x1C,
    UploadFriendRequest = 0x1D,
    DeleteFriendRequest = 0x1E,
    AcceptFriendRequest = 0x1F,
    ReadFriendRequest = 0x20,
    RemoveFriend = 0x21,
    BlockUser = 0x22,
    UnblockUser = 0x23,
    GetUserList = 0x24,
    GetUserMessages = 0x25,
    DownloadUserMessage = 0x26,
    DeleteUserMessages = 0x27,
    UploadUserMessage = 0x28,
    GetUsers = 0x29,
    BanUser = 0x2A,
    RequestUserAccess = 0x2B,
    GetLevelSaveData = 0x2C,
    SuggestLevelStars = 0x2D,
    GetGJRewards = 0x2E,
    GetGJChallenges = 0x2F,
    GetGJDailyLevelState = 0x30,
    Unknown49 = 0x31,
    RateDemon = 0x32,
    GetLevelLeaderboard = 0x33,
    GetGauntlets = 0x34,
    GetTopArtists = 0x35,
    GetAccountBackupURL = 0x36,
    GetAccountSyncURL = 0x37,
    NetworkTest = 0x38,
    JoinLobby = 0x39,
    ExitLobby = 0x3A,
    GetCustomContentURL = 0x3B,
    GetLevelLists = 0x3C,
    UploadLevelList = 0x3D,
    DeleteServerLevelList = 0x3E,
    GetNews = 0x3F,
    GetGJSecretReward = 0x40
};

enum class DialogChatPlacement {
    Center = 0,
    Top = 1,
    Bottom = 2,
};

enum class DialogAnimationType {
    Instant = 0,
    FromCenter = 1,
    FromLeft = 2,
    FromRight = 3,
    FromTop = 4,
    FromTop2 = 5
};

enum class GJColorIndex {
    BG = 1000,
    G1 = 1001,
    L = 1002,
    TDL = 1003,
    Obj = 1004,
    P1 = 1005,
    P2 = 1006,
    LBG = 1007,
    G2 = 1009,
    Black = 1010,
    White = 1011,
    Lighter = 1012,
    MG = 1013,
    MG2 = 1014
};

// Geode Addition
enum class ComparisonType {
    Equals = 0,
    Larger = 1,
    Smaller = 2,
};

// Geode Addition
enum class MoveTargetType {
    Both = 0,
    XOnly = 1,
    YOnly = 2,
};

// Geode Addition
enum class LeaderboardState {
    Default = 0,
    Top100 = 1,
    Global = 2,
    Creator = 3,
    Friends = 4,
};

// Wylie Addition (https://github.com/Wyliemaster/GD-Decompiled/blob/main/GD/code/headers/Layers/LevelSettingsLayer.h)
enum class Speed {
    Normal = 0,
    Slow = 1,
    Fast = 2,
    Faster = 3,
    Fastest = 4,
};

enum class CircleMode {
    Filled = 0,
    Outline = 1,
};

enum class ShipStreak {
    None = 0,
    ShipFire1 = 1,
    ShipFire2 = 2,
    ShipFire3 = 3,
    ShipFire4 = 4,
    ShipFire5 = 5,
    ShipFire6 = 6,
};

enum class TextFadeInStyle {
    Fade = 0,
    Scale = 1
};

// Geode Addition
enum class GameOptionsSetting {
    Off = -1,
    Disabled = 0,
    On = 1,
};

// Geode Addition
enum class GameObjectClassType {
    Game = 0,
    Effect = 1,
    Animated = 2,
    Enhanced = 4,
    Smart = 5,
};
