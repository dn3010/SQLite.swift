@import Foundation;

FOUNDATION_EXPORT double SQLiteVersionNumber;
FOUNDATION_EXPORT const unsigned char SQLiteVersionString[];

#if __has_include("SQLite-Bridging.h")
#import "SQLite-Bridging.h"
#else
#import <SQLite/SQLite-Bridging.h>
#endif
