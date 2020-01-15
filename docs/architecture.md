# Architecture

This document specifies the intended architecture. Some of what is stated here
has not been completed yet.

## rmf_traffic

A library that defines and implements the tools needed to manage traffic
schedules, identify conflicts, and produce plans that avoid or resolve the
conflicts. This library is middleware-neutral and aims to be generalized for
all mobile robot platforms. (Note: currently the planner only supports
differential-drive mobile robots, but there are plans to support holonomic
mobile robots, and we may extend the library to other types of mobility as
necessary.)

### Trajectory

A container of waypoints used to define the motion of a vehicle through space.

TODO:

 * Refactor this class so that it is purely a container of waypoints
 * The map name should be moved to the schedule/Itinerary element class
 * Remove the Profile field from the Segment class and move it to schedule/Itinerary

### Region

A class which can be used to specify a portion of space-time. This can be used
ask the schedule to reserve or designate some space for a period of time.

TODO:

 * Refactor this class similarly to Trajectory

### Time (TODO)

A class to designate time points and provide utility functions for manipulating them.

Consider how this class should relate to the `rclcpp::Time` class.

### Duration (TODO)

A class that specifies a distance between `Time` points.

### schedule/Database

A class that manages a schedule database.

### schedule/Mirror

A class that reflects a schedule database. Useful for giving remote processes
quick access to the information managed by the single official schedule
database.

### schedule/Query

A class for filtering relevant information out of the schedule.

### schedule/ParticipantData (TODO)

Information about a traffic schedule participant. Traffic itineraries in the
schedule are organized according to the participants that the itineraries belong
to.

### schedule/Itinerary (TODO)

An entry in the schedule database. It is a sequence of Trajectories, along with
information about what maps the trajectories exist on and what space the
participant occupies along the trajectory.

## rmf_task (TODO)

A library that defines abstract interfaces (TODO: and/or class templates?) for
generating, executing, interrupting, and managing tasks.

The abstract interfaces in this library use callbacks to facilitate a
[reactive programming](https://en.wikipedia.org/wiki/Reactive_programming)
design paradigm. At the core of the implementation, a worker thread with a job
queue is used to respond to events and keep track of progress.

This library would be the backbone of the fleet adapters' ability to respond to
events that occur and conditions that are met. For example, if a robot needs to
request a lift or wait for a door to open, these events can be processed and
managed through the `rmf_task` library.

TODO: Deliberate the name of this library, e.g.:

 * `rmf_reactive`
 * `rmf_action`
 * `rmf_events`
