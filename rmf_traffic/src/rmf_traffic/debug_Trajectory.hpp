/*
 * Copyright (C) 2019 Open Source Robotics Foundation
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

#ifndef RMF_TRAFFIC__SRC__DEBUG_TRAJECTORY_HPP
#define RMF_TRAFFIC__SRC__DEBUG_TRAJECTORY_HPP

#include <rmf_traffic/Trajectory.hpp>

namespace rmf_traffic {

class Trajectory::Debug
{
public:

  static bool check_iterator_time_consistency(
      const Trajectory& trajectory, bool print_inconsistency);
};


} // namespace rmf_traffic

#endif // RMF_TRAFFIC__SRC__DEBUG_TRAJECTORY_HPP
