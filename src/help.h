/*
 * Copyright (c) 2015, Erik Dubbelboer <erik at dubbelboer dot com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of Discnt nor the names of its contributors may be used
 *     to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __DISCNT_HELP_H
#define __DISCNT_HELP_H

static char *commandGroups[] = {
    "generic",
    "counters",
    "connection",
    "server",
};

struct commandHelp {
  char *name;
  char *params;
  char *summary;
  int group;
  char *since;
} commandHelp[] = {
    { "AUTH",
    "password",
    "Authenticate to the server",
    2,
    "1.0.0" },
    { "BGSAVE",
    "-",
    "Asynchronously save the dataset to disk",
    3,
    "1.0.0" },
    { "CLIENT GETNAME",
    "-",
    "Get the current connection name",
    3,
    "1.0.0" },
    { "CLIENT KILL",
    "ip:port",
    "Kill the connection of a client",
    3,
    "1.0.0" },
    { "CLIENT LIST",
    "-",
    "Get the list of client connections",
    3,
    "1.0.0" },
    { "CLIENT PAUSE",
    "timeout",
    "Stop processing commands from clients for some time",
    3,
    "1.0.0" },
    { "CLIENT SETNAME",
    "connection-name",
    "Set the current connection name",
    3,
    "1.0.0" },
    { "CONFIG GET",
    "parameter",
    "Get the value of a configuration parameter",
    3,
    "1.0.0" },
    { "CONFIG RESETSTAT",
    "-",
    "Reset the stats returned by INFO",
    3,
    "1.0.0" },
    { "CONFIG REWRITE",
    "-",
    "Rewrite the configuration file with the in memory configuration",
    3,
    "1.0.0" },
    { "CONFIG SET",
    "parameter value",
    "Set a configuration parameter to the given value",
    3,
    "1.0.0" },
    { "DEBUG COUNTER",
    "key",
    "Get debugging information about a counter",
    3,
    "1.0.0" },
    { "DEBUG SEGFAULT",
    "-",
    "Make the server crash",
    3,
    "1.0.0" },
    { "DECR",
    "key",
    "Decrement the counter by one",
    1,
    "1.0.0" },
    { "DECRBY",
    "key decrement",
    "Decrement the counter by the given number",
    1,
    "1.0.0" },
    { "ECHO",
    "message",
    "Echo the given string",
    2,
    "1.0.0" },
    { "GET",
    "key",
    "Get the value of a counter",
    1,
    "1.0.0" },
    { "INCR",
    "key",
    "Increment the counter by one",
    1,
    "1.0.0" },
    { "INCRBY",
    "key increment",
    "Increment the counter by the given amount",
    1,
    "1.0.0" },
    { "INCRBYFLOAT",
    "key increment",
    "Increment the counter by the given amount",
    1,
    "1.0.0" },
    { "INFO",
    "[section]",
    "Get information and statistics about the server",
    3,
    "1.0.0" },
    { "KEYS",
    "pattern",
    "Find all counters matching the given pattern",
    0,
    "1.0.0" },
    { "LASTSAVE",
    "-",
    "Get the UNIX time stamp of the last successful save to disk",
    3,
    "1.0.0" },
    { "MONITOR",
    "-",
    "Listen for all requests received by the server in real time",
    3,
    "1.0.0" },
    { "PING",
    "-",
    "Ping the server",
    2,
    "1.0.0" },
    { "QUIT",
    "-",
    "Close the connection",
    2,
    "1.0.0" },
    { "SAVE",
    "-",
    "Synchronously save the dataset to disk",
    3,
    "1.0.0" },
    { "SHUTDOWN",
    "[NOSAVE] [SAVE]",
    "Synchronously save the dataset to disk and then shut down the server",
    3,
    "1.0.0" },
    { "TIME",
    "-",
    "Return the current server time",
    3,
    "1.0.0" }
};

#endif
