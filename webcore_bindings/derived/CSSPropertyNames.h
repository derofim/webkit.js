/* This file is automatically generated from CSSPropertyNames.in by makeprop, do not edit */

#ifndef CSSPropertyNames_h
#define CSSPropertyNames_h

#include <string.h>
#include <wtf/HashFunctions.h>
#include <wtf/HashTraits.h>

namespace WTF {
class AtomicString;
class String;
}

namespace WebCore {

enum CSSPropertyID {
    CSSPropertyInvalid = 0,
    CSSPropertyColor = 1,
    CSSPropertyDirection = 2,
    CSSPropertyDisplay = 3,
    CSSPropertyFont = 4,
    CSSPropertyFontFamily = 5,
    CSSPropertyFontSize = 6,
    CSSPropertyFontStyle = 7,
    CSSPropertyFontVariant = 8,
    CSSPropertyFontWeight = 9,
    CSSPropertyTextRendering = 10,
    CSSPropertyWebkitFontFeatureSettings = 11,
    CSSPropertyWebkitFontKerning = 12,
    CSSPropertyWebkitFontSmoothing = 13,
    CSSPropertyWebkitFontVariantLigatures = 14,
    CSSPropertyWebkitLocale = 15,
    CSSPropertyWebkitTextOrientation = 16,
    CSSPropertyWebkitWritingMode = 17,
    CSSPropertyZoom = 18,
    CSSPropertyLineHeight = 19,
    CSSPropertyBackground = 20,
    CSSPropertyBackgroundAttachment = 21,
    CSSPropertyBackgroundClip = 22,
    CSSPropertyBackgroundColor = 23,
    CSSPropertyBackgroundImage = 24,
    CSSPropertyBackgroundOrigin = 25,
    CSSPropertyBackgroundPosition = 26,
    CSSPropertyBackgroundPositionX = 27,
    CSSPropertyBackgroundPositionY = 28,
    CSSPropertyBackgroundRepeat = 29,
    CSSPropertyBackgroundRepeatX = 30,
    CSSPropertyBackgroundRepeatY = 31,
    CSSPropertyBackgroundSize = 32,
    CSSPropertyBorder = 33,
    CSSPropertyBorderBottom = 34,
    CSSPropertyBorderBottomColor = 35,
    CSSPropertyBorderBottomLeftRadius = 36,
    CSSPropertyBorderBottomRightRadius = 37,
    CSSPropertyBorderBottomStyle = 38,
    CSSPropertyBorderBottomWidth = 39,
    CSSPropertyBorderCollapse = 40,
    CSSPropertyBorderColor = 41,
    CSSPropertyBorderImage = 42,
    CSSPropertyBorderImageOutset = 43,
    CSSPropertyBorderImageRepeat = 44,
    CSSPropertyBorderImageSlice = 45,
    CSSPropertyBorderImageSource = 46,
    CSSPropertyBorderImageWidth = 47,
    CSSPropertyBorderLeft = 48,
    CSSPropertyBorderLeftColor = 49,
    CSSPropertyBorderLeftStyle = 50,
    CSSPropertyBorderLeftWidth = 51,
    CSSPropertyBorderRadius = 52,
    CSSPropertyBorderRight = 53,
    CSSPropertyBorderRightColor = 54,
    CSSPropertyBorderRightStyle = 55,
    CSSPropertyBorderRightWidth = 56,
    CSSPropertyBorderSpacing = 57,
    CSSPropertyBorderStyle = 58,
    CSSPropertyBorderTop = 59,
    CSSPropertyBorderTopColor = 60,
    CSSPropertyBorderTopLeftRadius = 61,
    CSSPropertyBorderTopRightRadius = 62,
    CSSPropertyBorderTopStyle = 63,
    CSSPropertyBorderTopWidth = 64,
    CSSPropertyBorderWidth = 65,
    CSSPropertyBottom = 66,
    CSSPropertyBoxShadow = 67,
    CSSPropertyBoxSizing = 68,
    CSSPropertyCaptionSide = 69,
    CSSPropertyClear = 70,
    CSSPropertyClip = 71,
    CSSPropertyWebkitClipPath = 72,
    CSSPropertyContent = 73,
    CSSPropertyCounterIncrement = 74,
    CSSPropertyCounterReset = 75,
    CSSPropertyCursor = 76,
    CSSPropertyEmptyCells = 77,
    CSSPropertyFloat = 78,
    CSSPropertyFontStretch = 79,
    CSSPropertyHeight = 80,
    CSSPropertyImageRendering = 81,
    CSSPropertyLeft = 82,
    CSSPropertyLetterSpacing = 83,
    CSSPropertyListStyle = 84,
    CSSPropertyListStyleImage = 85,
    CSSPropertyListStylePosition = 86,
    CSSPropertyListStyleType = 87,
    CSSPropertyMargin = 88,
    CSSPropertyMarginBottom = 89,
    CSSPropertyMarginLeft = 90,
    CSSPropertyMarginRight = 91,
    CSSPropertyMarginTop = 92,
    CSSPropertyMaxHeight = 93,
    CSSPropertyMaxWidth = 94,
    CSSPropertyMinHeight = 95,
    CSSPropertyMinWidth = 96,
    CSSPropertyObjectFit = 97,
    CSSPropertyOpacity = 98,
    CSSPropertyOrphans = 99,
    CSSPropertyOutline = 100,
    CSSPropertyOutlineColor = 101,
    CSSPropertyOutlineOffset = 102,
    CSSPropertyOutlineStyle = 103,
    CSSPropertyOutlineWidth = 104,
    CSSPropertyOverflow = 105,
    CSSPropertyOverflowWrap = 106,
    CSSPropertyOverflowX = 107,
    CSSPropertyOverflowY = 108,
    CSSPropertyPadding = 109,
    CSSPropertyPaddingBottom = 110,
    CSSPropertyPaddingLeft = 111,
    CSSPropertyPaddingRight = 112,
    CSSPropertyPaddingTop = 113,
    CSSPropertyPage = 114,
    CSSPropertyPageBreakAfter = 115,
    CSSPropertyPageBreakBefore = 116,
    CSSPropertyPageBreakInside = 117,
    CSSPropertyPointerEvents = 118,
    CSSPropertyPosition = 119,
    CSSPropertyQuotes = 120,
    CSSPropertyResize = 121,
    CSSPropertyRight = 122,
    CSSPropertySize = 123,
    CSSPropertySrc = 124,
    CSSPropertySpeak = 125,
    CSSPropertyTableLayout = 126,
    CSSPropertyTabSize = 127,
    CSSPropertyTextAlign = 128,
    CSSPropertyTextDecoration = 129,
    CSSPropertyTextIndent = 130,
    CSSPropertyTextLineThrough = 131,
    CSSPropertyTextLineThroughColor = 132,
    CSSPropertyTextLineThroughMode = 133,
    CSSPropertyTextLineThroughStyle = 134,
    CSSPropertyTextLineThroughWidth = 135,
    CSSPropertyTextOverflow = 136,
    CSSPropertyTextOverline = 137,
    CSSPropertyTextOverlineColor = 138,
    CSSPropertyTextOverlineMode = 139,
    CSSPropertyTextOverlineStyle = 140,
    CSSPropertyTextOverlineWidth = 141,
    CSSPropertyTextShadow = 142,
    CSSPropertyTextTransform = 143,
    CSSPropertyTextUnderline = 144,
    CSSPropertyTextUnderlineColor = 145,
    CSSPropertyTextUnderlineMode = 146,
    CSSPropertyTextUnderlineStyle = 147,
    CSSPropertyTextUnderlineWidth = 148,
    CSSPropertyTop = 149,
    CSSPropertyTransition = 150,
    CSSPropertyTransitionDelay = 151,
    CSSPropertyTransitionDuration = 152,
    CSSPropertyTransitionProperty = 153,
    CSSPropertyTransitionTimingFunction = 154,
    CSSPropertyUnicodeBidi = 155,
    CSSPropertyUnicodeRange = 156,
    CSSPropertyVerticalAlign = 157,
    CSSPropertyVisibility = 158,
    CSSPropertyWhiteSpace = 159,
    CSSPropertyWidows = 160,
    CSSPropertyWidth = 161,
    CSSPropertyWordBreak = 162,
    CSSPropertyWordSpacing = 163,
    CSSPropertyWordWrap = 164,
    CSSPropertyZIndex = 165,
    CSSPropertyWebkitAlt = 166,
    CSSPropertyWebkitAnimation = 167,
    CSSPropertyWebkitAnimationDelay = 168,
    CSSPropertyWebkitAnimationDirection = 169,
    CSSPropertyWebkitAnimationDuration = 170,
    CSSPropertyWebkitAnimationFillMode = 171,
    CSSPropertyWebkitAnimationIterationCount = 172,
    CSSPropertyWebkitAnimationName = 173,
    CSSPropertyWebkitAnimationPlayState = 174,
    CSSPropertyWebkitAnimationTimingFunction = 175,
    CSSPropertyWebkitAppearance = 176,
    CSSPropertyWebkitAspectRatio = 177,
    CSSPropertyWebkitBackfaceVisibility = 178,
    CSSPropertyWebkitBackgroundBlendMode = 179,
    CSSPropertyWebkitBackgroundClip = 180,
    CSSPropertyWebkitBackgroundComposite = 181,
    CSSPropertyWebkitBackgroundOrigin = 182,
    CSSPropertyWebkitBackgroundSize = 183,
    CSSPropertyWebkitBorderAfter = 184,
    CSSPropertyWebkitBorderAfterColor = 185,
    CSSPropertyWebkitBorderAfterStyle = 186,
    CSSPropertyWebkitBorderAfterWidth = 187,
    CSSPropertyWebkitBorderBefore = 188,
    CSSPropertyWebkitBorderBeforeColor = 189,
    CSSPropertyWebkitBorderBeforeStyle = 190,
    CSSPropertyWebkitBorderBeforeWidth = 191,
    CSSPropertyWebkitBorderEnd = 192,
    CSSPropertyWebkitBorderEndColor = 193,
    CSSPropertyWebkitBorderEndStyle = 194,
    CSSPropertyWebkitBorderEndWidth = 195,
    CSSPropertyWebkitBorderFit = 196,
    CSSPropertyWebkitBorderHorizontalSpacing = 197,
    CSSPropertyWebkitBorderImage = 198,
    CSSPropertyWebkitBorderRadius = 199,
    CSSPropertyWebkitBorderStart = 200,
    CSSPropertyWebkitBorderStartColor = 201,
    CSSPropertyWebkitBorderStartStyle = 202,
    CSSPropertyWebkitBorderStartWidth = 203,
    CSSPropertyWebkitBorderVerticalSpacing = 204,
    CSSPropertyWebkitBoxAlign = 205,
    CSSPropertyWebkitBoxDirection = 206,
    CSSPropertyWebkitBoxFlex = 207,
    CSSPropertyWebkitBoxFlexGroup = 208,
    CSSPropertyWebkitBoxLines = 209,
    CSSPropertyWebkitBoxOrdinalGroup = 210,
    CSSPropertyWebkitBoxOrient = 211,
    CSSPropertyWebkitBoxPack = 212,
    CSSPropertyWebkitBoxReflect = 213,
    CSSPropertyWebkitBoxShadow = 214,
    CSSPropertyWebkitColorCorrection = 215,
    CSSPropertyWebkitColumnAxis = 216,
    CSSPropertyWebkitColumnBreakAfter = 217,
    CSSPropertyWebkitColumnBreakBefore = 218,
    CSSPropertyWebkitColumnBreakInside = 219,
    CSSPropertyWebkitColumnCount = 220,
    CSSPropertyWebkitColumnFill = 221,
    CSSPropertyWebkitColumnGap = 222,
    CSSPropertyWebkitColumnProgression = 223,
    CSSPropertyWebkitColumnRule = 224,
    CSSPropertyWebkitColumnRuleColor = 225,
    CSSPropertyWebkitColumnRuleStyle = 226,
    CSSPropertyWebkitColumnRuleWidth = 227,
    CSSPropertyWebkitColumnSpan = 228,
    CSSPropertyWebkitColumnWidth = 229,
    CSSPropertyWebkitColumns = 230,
    CSSPropertyWebkitAlignContent = 231,
    CSSPropertyWebkitAlignItems = 232,
    CSSPropertyWebkitAlignSelf = 233,
    CSSPropertyWebkitFlex = 234,
    CSSPropertyWebkitFlexBasis = 235,
    CSSPropertyWebkitFlexDirection = 236,
    CSSPropertyWebkitFlexFlow = 237,
    CSSPropertyWebkitFlexGrow = 238,
    CSSPropertyWebkitFlexShrink = 239,
    CSSPropertyWebkitFlexWrap = 240,
    CSSPropertyWebkitJustifyContent = 241,
    CSSPropertyWebkitFontSizeDelta = 242,
    CSSPropertyWebkitGridArea = 243,
    CSSPropertyWebkitGridAutoColumns = 244,
    CSSPropertyWebkitGridAutoRows = 245,
    CSSPropertyWebkitGridColumnEnd = 246,
    CSSPropertyWebkitGridColumnStart = 247,
    CSSPropertyWebkitGridDefinitionColumns = 248,
    CSSPropertyWebkitGridDefinitionRows = 249,
    CSSPropertyWebkitGridRowEnd = 250,
    CSSPropertyWebkitGridRowStart = 251,
    CSSPropertyWebkitGridColumn = 252,
    CSSPropertyWebkitGridRow = 253,
    CSSPropertyWebkitGridTemplate = 254,
    CSSPropertyWebkitGridAutoFlow = 255,
    CSSPropertyWebkitHighlight = 256,
    CSSPropertyWebkitHyphenateCharacter = 257,
    CSSPropertyWebkitHyphenateLimitAfter = 258,
    CSSPropertyWebkitHyphenateLimitBefore = 259,
    CSSPropertyWebkitHyphenateLimitLines = 260,
    CSSPropertyWebkitHyphens = 261,
    CSSPropertyWebkitLineBoxContain = 262,
    CSSPropertyWebkitLineAlign = 263,
    CSSPropertyWebkitLineBreak = 264,
    CSSPropertyWebkitLineClamp = 265,
    CSSPropertyWebkitLineGrid = 266,
    CSSPropertyWebkitLineSnap = 267,
    CSSPropertyWebkitLogicalWidth = 268,
    CSSPropertyWebkitLogicalHeight = 269,
    CSSPropertyWebkitMarginAfterCollapse = 270,
    CSSPropertyWebkitMarginBeforeCollapse = 271,
    CSSPropertyWebkitMarginBottomCollapse = 272,
    CSSPropertyWebkitMarginTopCollapse = 273,
    CSSPropertyWebkitMarginCollapse = 274,
    CSSPropertyWebkitMarginAfter = 275,
    CSSPropertyWebkitMarginBefore = 276,
    CSSPropertyWebkitMarginEnd = 277,
    CSSPropertyWebkitMarginStart = 278,
    CSSPropertyWebkitMarquee = 279,
    CSSPropertyWebkitMarqueeDirection = 280,
    CSSPropertyWebkitMarqueeIncrement = 281,
    CSSPropertyWebkitMarqueeRepetition = 282,
    CSSPropertyWebkitMarqueeSpeed = 283,
    CSSPropertyWebkitMarqueeStyle = 284,
    CSSPropertyWebkitMask = 285,
    CSSPropertyWebkitMaskBoxImage = 286,
    CSSPropertyWebkitMaskBoxImageOutset = 287,
    CSSPropertyWebkitMaskBoxImageRepeat = 288,
    CSSPropertyWebkitMaskBoxImageSlice = 289,
    CSSPropertyWebkitMaskBoxImageSource = 290,
    CSSPropertyWebkitMaskBoxImageWidth = 291,
    CSSPropertyWebkitMaskClip = 292,
    CSSPropertyWebkitMaskComposite = 293,
    CSSPropertyWebkitMaskImage = 294,
    CSSPropertyWebkitMaskOrigin = 295,
    CSSPropertyWebkitMaskPosition = 296,
    CSSPropertyWebkitMaskPositionX = 297,
    CSSPropertyWebkitMaskPositionY = 298,
    CSSPropertyWebkitMaskRepeat = 299,
    CSSPropertyWebkitMaskRepeatX = 300,
    CSSPropertyWebkitMaskRepeatY = 301,
    CSSPropertyWebkitMaskSize = 302,
    CSSPropertyWebkitMaskSourceType = 303,
    CSSPropertyWebkitMaxLogicalWidth = 304,
    CSSPropertyWebkitMaxLogicalHeight = 305,
    CSSPropertyWebkitMinLogicalWidth = 306,
    CSSPropertyWebkitMinLogicalHeight = 307,
    CSSPropertyWebkitNbspMode = 308,
    CSSPropertyWebkitOrder = 309,
    CSSPropertyWebkitPaddingAfter = 310,
    CSSPropertyWebkitPaddingBefore = 311,
    CSSPropertyWebkitPaddingEnd = 312,
    CSSPropertyWebkitPaddingStart = 313,
    CSSPropertyWebkitPerspective = 314,
    CSSPropertyWebkitPerspectiveOrigin = 315,
    CSSPropertyWebkitPerspectiveOriginX = 316,
    CSSPropertyWebkitPerspectiveOriginY = 317,
    CSSPropertyWebkitPrintColorAdjust = 318,
    CSSPropertyWebkitRtlOrdering = 319,
    CSSPropertyWebkitRubyPosition = 320,
    CSSPropertyWebkitTextCombine = 321,
    CSSPropertyWebkitTextDecorationsInEffect = 322,
    CSSPropertyWebkitTextEmphasis = 323,
    CSSPropertyWebkitTextEmphasisColor = 324,
    CSSPropertyWebkitTextEmphasisPosition = 325,
    CSSPropertyWebkitTextEmphasisStyle = 326,
    CSSPropertyWebkitTextFillColor = 327,
    CSSPropertyWebkitTextSecurity = 328,
    CSSPropertyWebkitTextStroke = 329,
    CSSPropertyWebkitTextStrokeColor = 330,
    CSSPropertyWebkitTextStrokeWidth = 331,
    CSSPropertyWebkitTransform = 332,
    CSSPropertyWebkitTransformOrigin = 333,
    CSSPropertyWebkitTransformOriginX = 334,
    CSSPropertyWebkitTransformOriginY = 335,
    CSSPropertyWebkitTransformOriginZ = 336,
    CSSPropertyWebkitTransformStyle = 337,
    CSSPropertyWebkitTransition = 338,
    CSSPropertyWebkitTransitionDelay = 339,
    CSSPropertyWebkitTransitionDuration = 340,
    CSSPropertyWebkitTransitionProperty = 341,
    CSSPropertyWebkitTransitionTimingFunction = 342,
    CSSPropertyWebkitUserDrag = 343,
    CSSPropertyWebkitUserModify = 344,
    CSSPropertyWebkitUserSelect = 345,
};

const int firstCSSProperty = 1;
const int numCSSProperties = 345;
const int lastCSSProperty = 345;
const size_t maxCSSPropertyNameLength = 34;

const char* getPropertyName(CSSPropertyID);
const WTF::AtomicString& getPropertyNameAtomicString(CSSPropertyID id);
WTF::String getPropertyNameString(CSSPropertyID id);
WTF::String getJSPropertyName(CSSPropertyID);

inline CSSPropertyID convertToCSSPropertyID(int value)
{
    ASSERT((value >= firstCSSProperty && value <= lastCSSProperty) || value == CSSPropertyInvalid);
    return static_cast<CSSPropertyID>(value);
}

} // namespace WebCore

namespace WTF {
template<> struct DefaultHash<WebCore::CSSPropertyID> { typedef IntHash<unsigned> Hash; };
template<> struct HashTraits<WebCore::CSSPropertyID> : GenericHashTraits<WebCore::CSSPropertyID> {
    static const bool emptyValueIsZero = true;
    static const bool needsDestruction = false;
    static void constructDeletedValue(WebCore::CSSPropertyID& slot) { slot = static_cast<WebCore::CSSPropertyID>(WebCore::lastCSSProperty + 1); }
    static bool isDeletedValue(WebCore::CSSPropertyID value) { return value == (WebCore::lastCSSProperty + 1); }
};
}

#endif // CSSPropertyNames_h
