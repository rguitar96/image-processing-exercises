file(REMOVE_RECURSE
  "exercise_02a.pdb"
  "exercise_02a"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/exercise_02a.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
