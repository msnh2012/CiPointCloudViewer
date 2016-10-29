//
// Created by Masayuki IZUMI on 10/27/16.
//

#ifndef CIPOINTCLOUDVIEWERAPP_UTIL_H_H
#define CIPOINTCLOUDVIEWERAPP_UTIL_H_H

#include <chrono>
#include <string>

#include "boost/filesystem.hpp"

#include "OpenNI.h"
#ifdef USE_NITE2
#include "NiTE.h"
#endif

namespace util {

void checkStatus(openni::Status status, const std::string msg);
#ifdef USE_NITE2
void checkStatus(nite::Status status, const std::string msg);
#endif
void checkStatus(bool is_ok, const std::string msg);

void mkdir_p(const std::string &dir);
void mkdir_p(const boost::filesystem::path &path);

std::chrono::system_clock::time_point now();
int64_t to_ms(const std::chrono::system_clock::time_point &tp);
int64_t to_us(const std::chrono::system_clock::time_point &tp);

}

#endif //CIPOINTCLOUDVIEWERAPP_UTIL_H_H