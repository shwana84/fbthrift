#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from thrift.py3lite.sync_client import SyncClient as _fbthrift_py3lite_SyncClient
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions
import module.lite_types as _module_lite_types


class Raiser:
    class Sync(_fbthrift_py3lite_SyncClient):
        def __init__(self, channel):
            super().__init__(channel, "Raiser")

        def doBland(
            self
        ):
            resp = self._send_request(
                "doBland",
                _module_lite_types._fbthrift_Raiser_doBland_args(),
                _module_lite_types._fbthrift_Raiser_doBland_result,
            )

        def doRaise(
            self
        ):
            resp = self._send_request(
                "doRaise",
                _module_lite_types._fbthrift_Raiser_doRaise_args(),
                _module_lite_types._fbthrift_Raiser_doRaise_result,
            )
            if resp.b is not None:
                raise resp.b
            if resp.f is not None:
                raise resp.f
            if resp.s is not None:
                raise resp.s

        def get200(
            self
        ):
            resp = self._send_request(
                "get200",
                _module_lite_types._fbthrift_Raiser_get200_args(),
                _module_lite_types._fbthrift_Raiser_get200_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )

        def get500(
            self
        ):
            resp = self._send_request(
                "get500",
                _module_lite_types._fbthrift_Raiser_get500_args(),
                _module_lite_types._fbthrift_Raiser_get500_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            if resp.f is not None:
                raise resp.f
            if resp.b is not None:
                raise resp.b
            if resp.s is not None:
                raise resp.s
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )


