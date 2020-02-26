file(REMOVE_RECURSE
  "exercise_02b.pdb"
  "exercise_02b"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/exercise_02b.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
