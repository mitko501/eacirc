#include "Status.h"

const char* statusToString(int error) {
    switch (error) {
    // BASE ERROR STATUS
    case STAT_OK:                       return "STAT_OK";
    case STAT_NOT_IMPLEMENTED_YET:      return "STAT_NOT_IMPLEMENTED_YET";
    case STAT_NOT_ENOUGHT_MEMORY:       return "STAT_NOT_ENOUGHT_MEMORY";
    case STAT_DATA_CORRUPTED:           return "STAT_DATA_CORRUPTED";
    case STAT_DATA_INCORRECT_LENGTH:    return "STAT_DATA_INCORRECT_LENGTH";
    case STAT_FILE_OPEN_FAIL:           return "STAT_FILE_OPEN_FAIL";
    case STAT_NOT_ENOUGHT_DATA_TYPE:    return "STAT_NOT_ENOUGHT_DATA_TYPE";
    case STAT_USERDATA_BAD:             return "STAT_USERDATA_BAD";
    case STAT_KEY_LENGTH_BAD:           return "STAT_KEY_LENGTH_BAD";
    case STAT_CONFIG_DATA_READ_FAIL:    return "STAT_CONFIG_DATA_READ_FAIL";
    case STAT_INVALID_ARGUMETS:         return "STAT_INVALID_ARGUMETS";
    case STAT_CONFIG_INCORRECT:         return "STAT_CONFIG_INCORRECT";
    case STAT_FILE_WRITE_FAIL:          return "STAT_FILE_WRITE_FAIL";
    case STAT_CONFIG_SCRIPT_INCOMPLETE: return "STAT_CONFIG_SCRIPT_INCOMPLETE";
    case STAT_PROJECT_ERROR:            return "STAT_PROJECT_ERROR";
    case STAT_INTENTIONAL_EXIT:         return "STAT_INTENTIONAL_EXIT";
    case STAT_FILE_READ_FAIL:           return "STAT_FILE_READ_FAIL";
    case STAT_EXTERNAL_SYSTEM_FAILED:   return "STAT_EXTERNAL_SYSTEM_FAILED";
    case STAT_CIRCUIT_INCONSISTENT:     return "STAT_CIRCUIT_INCONSISTENT";
    case STAT_CIRCUIT_BACKEND_ERROR:    return "STAT_CIRCUIT_BACKEND_ERROR";
    }
    // NO SPECIAL RULE MATCH
    return "UNKNOWN_STATUS";
}

