/*
 * Copyright (C) 2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#include "RectifierInternal.hpp"

namespace rmf_traffic {
namespace schedule {

//==============================================================================
Rectifier Rectifier::Implementation::make(
    Participant::Implementation& participant)
{
  Rectifier rectifier;
  rectifier._pimpl = rmf_utils::make_unique_impl<Implementation>(
        Implementation{participant});

  return rectifier;
}

//==============================================================================
void Rectifier::retransmit(ItineraryVersion from, ItineraryVersion to)
{
  _pimpl->participant.retransmit(from, to);
}

//==============================================================================
Rectifier::Rectifier()
{
  // Do nothing
}

//==============================================================================
RectificationRequester::~RectificationRequester()
{
  // Do nothing
}

} // namespace schedule
} // namespace rmf_traffic
