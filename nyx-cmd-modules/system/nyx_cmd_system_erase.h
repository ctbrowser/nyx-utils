// @@@LICENSE
//
//      Copyright (c) 2012-2013 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// LICENSE@@@

#ifndef __NYXCMDSYSTEMERASE_H__
#define __NYXCMDSYSTEMERASE_H__

/**
 * @file nyx_cmd_system_erase.h
 *
 * @brief Implementation class for nyx-cmd System device type erase_partition command.
 *
 */

#include <nyx/nyx_client.h>
#include <nyx/common/nyx_device.h>

class NyxCmdSystemErase: public NyxCmdCommand
{
	/**
	* @defgroup nyx_cmd_system_reboot nyx-cmd System device type reboot command
	* @ingroup nyx_cmd_system_module
	* @{
	*/
private:
	/**
	 * Resolve arguments given to Execute function.
	 *
	 * @param[in]   argc - number of arguments
	 * @param[in]   argv - list of arguments
	 *
	 * @return Shutdown type value, -1 if error
	 *
	 */
	nyx_system_erase_type_t resolveArguments(int argc, char **argv);
public:
	/**
	 * Class constructor.
	 *
	 */
	NyxCmdSystemErase(void);
	/**
	 * Get the description of the command functionality.
	 *
	 * @return String containing description of the functionality.
	 *
	 */
	std::string Description();

	/**
	 * Get the name for command. This will be compared against the command line arguments
	 *
	 * @return String containing command name.
	 *
	 */
	std::string Name();

	/**
	 * Execute the command. Full argument list is expected.
	 *
	 * @param[in]   deviceId - device identifier
	 * @param[in]   argc     - number of arguments
	 * @param[in]   argv     - list of arguments
	 *
	 * @return error value from command. 0 if no error.
	 *
	 */
	int Execute(const char *deviceId, int argc, char **argv);
	/** @} */
};

#endif // __NYXCMDSYSTEMERASE_H__
