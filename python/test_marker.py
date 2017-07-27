import sys
import pytest

@pytest.mark.xfail(reason='1 is not 2')
def test_fail():
    assert 1 == 2


@pytest.mark.parametrize("test_input,expected", [
    ("3+5", 8),
    ("2+4", 6),
    pytest.mark.xfail(("6*9", 42),reason="eh 54"),
])
def test_eval(test_input, expected):
    assert eval(test_input) == expected

