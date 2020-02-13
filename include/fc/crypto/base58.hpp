#pragma once
#include <fc/string.hpp>
#include <fc/time.hpp>
#include <vector>

namespace fc {
    std::string to_base58( const char* d, size_t s, const fc::time_point& deadline );
    std::string to_base58( const std::vector<char>& data, const fc::time_point& deadline );
    std::vector<char> from_base58( const std::string& base58_str );
    size_t from_base58( const std::string& base58_str, char* out_data, size_t out_data_len );
}
