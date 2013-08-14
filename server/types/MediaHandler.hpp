/*
 * MediaHandler.hpp - Kurento Media Server
 *
 * Copyright (C) 2013 Kurento
 * Contact: Miguel París Díaz <mparisdiaz@gmail.com>
 * Contact: José Antonio Santos Cadenas <santoscadenas@kurento.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __MEDIA_HANDLER_H__
#define __MEDIA_HANDLER_H__

#include "mediaHandler_types.h"

namespace kurento
{

class MediaHandlerAddress
{
public:
  MediaHandlerAddress (const std::string &address, const int32_t port)
  {
    this->address = address;
    this->port= port;
  };

  std::string address;
  int32_t port;
};

class MediaHandler
{
public:
  int32_t id;
  std::list<std::shared_ptr<MediaHandlerAddress>> addresses;

  MediaHandler (int32_t id)
  {
    this->id= id;
  };

  void sendEvent (MediaEvent &event);

};

} // kurento

#endif /* __MEDIA_HANDLER_H__ */
