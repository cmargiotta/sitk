if not meson.is_subproject()
        catch2 = dependency('catch2-with-main')

        main_test = executable(
                'stk',
                'stk.cpp',
                dependencies: [stk, catch2]
        )

        test('stk test', main_test)
endif