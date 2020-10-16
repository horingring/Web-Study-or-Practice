export const usePreventLeave = () => {
  const listener = (event) => {
    event.preventDefault();
    event.returnValue = "";
  };
  const enablePrevent = () => {
    window.addEventListener("beforeunload", listener);
    console.log("been able");
  };
  const disablePrevent = () => {
    window.removeEventListener("beforeunload", listener);
    console.log("been disable");
  };
  return { enablePrevent, disablePrevent };
};
