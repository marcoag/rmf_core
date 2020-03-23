^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package rmf_fleet_adapter
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.0.1 (2020-03-23)
------------------

0.0.0 (2020-03-23)
------------------
* Updated dependencies (`#80 <https://github.com/marcoag/rmf_core/issues/80>`_)
* cleaned up deprecated documentation and examples (`#72 <https://github.com/marcoag/rmf_core/issues/72>`_)
* fixed compilation errors in fleet adapter using new compute-start utility function (`#69 <https://github.com/marcoag/rmf_core/issues/69>`_)
* Feature/refactor merge to graph (`#67 <https://github.com/marcoag/rmf_core/issues/67>`_)
  * shifted api and implementation into rmf_traffic::agv::Planner, no longer rclcpp dependent, builds
  * problems returning from the optional StartSet
  * figured out how to use value of optional
  * tests should be quite complete, starting PR and cleanup
  * getting conflicted lane indices in tests
  * finished writing tests and passes
  * removed redundant planners in tests, fixed typos, added const to references
* Bring back all actions in the delivery task (`#66 <https://github.com/marcoag/rmf_core/issues/66>`_)
* Changes that were used for DP2 (`#64 <https://github.com/marcoag/rmf_core/issues/64>`_)
* Make the schedule manager persistent (`#63 <https://github.com/marcoag/rmf_core/issues/63>`_)
* require the lift name parameter to be present for the mock lifts
* Use the correct string
* Fix bug
* Ignore lift times to avoid clock sync problems (`#62 <https://github.com/marcoag/rmf_core/issues/62>`_)
* Allow the schedule to jump forward (`#61 <https://github.com/marcoag/rmf_core/issues/61>`_)
* Task aggregator (`#55 <https://github.com/marcoag/rmf_core/issues/55>`_)
* Tweaks (`#60 <https://github.com/marcoag/rmf_core/issues/60>`_)
* Fix deliveries (`#59 <https://github.com/marcoag/rmf_core/issues/59>`_)
* Fixing event listeners (`#58 <https://github.com/marcoag/rmf_core/issues/58>`_)
* Be smarter about task IDs (`#57 <https://github.com/marcoag/rmf_core/issues/57>`_)
* Add a docking event to the graph and planner (`#56 <https://github.com/marcoag/rmf_core/issues/56>`_)
* Fixes (`#54 <https://github.com/marcoag/rmf_core/issues/54>`_)
* Fleet adapter behavior fixes (`#51 <https://github.com/marcoag/rmf_core/issues/51>`_)
* Create nodes to supervise the lift and door requests (`#49 <https://github.com/marcoag/rmf_core/issues/49>`_)
* Make a main() function for the full_control fleet adapter (`#48 <https://github.com/marcoag/rmf_core/issues/48>`_)
* Create a task for looping between two points an arbitrary number of times (`#47 <https://github.com/marcoag/rmf_core/issues/47>`_)
* Implement a responsive full-control fleet adapter (`#46 <https://github.com/marcoag/rmf_core/issues/46>`_)
* Read Only Fleet Adapter Tests (`#38 <https://github.com/marcoag/rmf_core/issues/38>`_)
* Add replace and delay services to the schedule (`#32 <https://github.com/marcoag/rmf_core/issues/32>`_)
* Read only fleet adapter (`#29 <https://github.com/marcoag/rmf_core/issues/29>`_)
* fixed clean build issue (`#28 <https://github.com/marcoag/rmf_core/issues/28>`_)
* some docs (`#25 <https://github.com/marcoag/rmf_core/issues/25>`_)
  * some docs
  * english bad
* Integrate read-only fleet adapter (`#18 <https://github.com/marcoag/rmf_core/issues/18>`_)
* Contributors: Aaron Chong, Grey, Michael X. Grey, Yadu
